//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    static bool cmp(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b)
    {
        return a.second.second < b.second.second; 
    }

    static int findparent(int a, vector<int> &parent)
    {
        if (parent[a] == a)
            return a;
        else
        {
            parent[a] = findparent(parent[a], parent);
            return parent[a];
        }
    }

    // Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here

        vector<int> parent(V);
        vector<int> rank(V);
        for (int i = 0; i < V; i++)
        {
            parent[i] = i;
            rank[i] = 1;
        }

        vector<pair<int, pair<int, int>>> container;
        // u to v w

        for (int i = 0; i < V; i++)
        {
            vector<vector<int>> child = adj[i];
            for (auto x : child)
            {
                container.push_back({i, {x[0], x[1]}});
            }
        }

        sort(container.begin(), container.end(), cmp);
        int mstCost = 0;

        for (auto i : container)
        {
            int u = i.first;
            int v = i.second.first;
            u = findparent(u, parent);
            v = findparent(v, parent);
            if (u == v)
                continue;
            else /// union
            {
                if (rank[u] == rank[v])
                {
                    rank[u]++;
                    parent[v] = u;
                }
                else if (rank[v] > rank[u])
                {
                    parent[u] = v;
                }
                else
                    parent[v] = u;

                mstCost += i.second.second;
            }
        }

        return mstCost;
    }
};
