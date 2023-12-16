
//        ****************  Author :  Tashin.Parvez  ****************
//        ************* United International University *************
//        ****************  Updated:    27/10/23     ****************

#include <bits/stdc++.h>
#define CRACKED return 0;
#define nl endl // NewLine
#define null NULL
#define sp " " // space
#define setDec(x) fixed << setprecision(x)
#define len(s) s.length()
#define deb(n) cout << "Tashin   " << #n << " = " << n << endl; // debug code
#define debt cout << "Tashin   " << endl;                       // debug code
using namespace std;

/**************************************************************************************************/

int findparent(int n, vector<int> &parent)
{
    if (parent[n] == n)
        return n;
    else
    {
        parent[n] = findparent(parent[n], parent);
        return parent[n];
    }
}

bool unionSet(int a, int b, vector<int> &parent, vector<int> &rank)
{
    a = findparent(a, parent);
    b = findparent(b, parent);

    if (a == b)
        return true;
    else
    {
        if (rank[a] == rank[b])
        {
            parent[b] = a;
            rank[a]++;
        }
        else
        {
            if (rank[a] > rank[b])
                parent[b] = a;
            else
                parent[a] = b;
        }
        return false;
    }
}

void makeSet(int n, vector<int> &parent, vector<int> &rank)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = i;
        rank[i] = 0;
    }
}

bool cmp(vector<int> a, vector<int> b)
{
    return a[2] < b[2];
}

int minimumSpanningTree(vector<vector<int>> &edges, int n)
{

    sort(edges.begin(), edges.end(), cmp);

    vector<int> parent(n);
    vector<int> rank(n);

    makeSet(n, parent, rank);

    int mstCost = 0;

    for (int i = 0; i < edges.size(); i++)
    {
        bool connected = unionSet(edges[i][0], edges[i][1], parent, rank);

        if (connected == false)
        {
            mstCost += edges[i][2];
        }
    }

    return mstCost;
}