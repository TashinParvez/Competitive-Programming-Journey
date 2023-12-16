// Set
// Find
// Union

/*
Set(x): Preparing the vertex for algorithm
Union(u,v):
*/

#include <bits/stdc++.h>
using namespace std;

class DisjointSet
{
private:
    vector<int> parent;
    vector<int> rank;

public:
    DisjointSet(int size)
    {
        parent.resize(size);
        rank.resize(size, 0);
        makeSet(size);
    }

    void makeSet(int size)
    {
        for (int i = 0; i < size; i++)
        {
            parent[i] = i;
        }
    }

    int find(int x)
    {
        if (parent[x] != x)
        {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    void _union(int x, int y)
    {
        int parentX = find(x);
        int parentY = find(y);

        if (parentX != parentY)
        { // if they belongs to two disjoint sets

            // Put smaller ranked item under
            // bigger ranked item if ranks are
            // different

            if (rank[parentX] < rank[parentY])
            {
                parent[parentX] = parentY;
            }
            else if (rank[parentX] > rank[parentY])
            {
                parent[parentY] = parentX;
            }
            else
            {
                // If ranks are same, then increment rank
                parent[parentY] = parentX;
                rank[parentX]++;
            }
        }
    }
};

bool isCyclcic(vector<pair<int, int>> &edges, int v)
{
    DisjointSet dsu(v);

    for (const auto &edge : edges)
    {
        int from = edge.first;
        int to = edge.second;

        int rootF = dsu.find(from);
        int rootT = dsu.find(to);

        if (rootF == rootT)
        {
            return true; // cycle found
        }

        dsu._union(from, to); // union sets since no cycle is found
    }

    return false;
}

/*********************************************************************************************/

bool findParent(int gf, int n, vector<pair<int, int>> &edges)
{
    if (gf == n)
        return true;
    else
    {
        for (auto i : edges)
        {
            if (i.first == n) /// gettig the out-going edges
            {
                if (findParent(gf, i.second, edges))
                    return true;
            }
        }
        return false;
    }
}

bool checkCycle(int head, vector<pair<int, int>> &edges)
{
    bool flag = false;

    for (auto i : edges)
    {
        if (i.first == head) /// gettig the out-going edges
        {
            if (findParent(i.first, i.second, edges))
            {
                flag = true;
                break;
            }
        }
    }

    return flag;
}

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first < a.second;
}

int main()
{
    int v, e;
    cin >> v >> e;

    vector<pair<int, int>> edges(e); /// u to v

    for (int i = 0; i < e; i++)
    {
        int from;
        int to;

        cin >> from >> to;
        edges[i] = make_pair(from, to);
    }

    sort(edges.begin(), edges.end(), cmp);

    for (int i = 0; i < v; i++)
    {
        if (checkCycle(i, edges))
        {
            cout << endl
                 << "Find Cycle" << endl;
            return 0;
        }
    }
    cout << endl
         << "Find NO-Cycle" << endl;
    return 0;
}

/*

5 7

0 1
0 2
1 3
1 4
2 1
2 3
3 4


*/

/*

4 5

0 1
0 2
1 3
2 3
3 0

*/