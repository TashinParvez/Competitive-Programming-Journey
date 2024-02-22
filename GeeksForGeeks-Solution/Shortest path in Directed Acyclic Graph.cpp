
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

// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
    vector<int> shortestPath(int N, int M, vector<vector<int>> &edges)
    {

        vector<vector<pair<int, int>>> adj;

        for (auto i : edges)
        {
            adj[i[0]].push_back({i[1], i[2]});
        }

        vector<int> distance(N, -1);
        vector<int> visited(N, 0);

        vector<int> parent(N);

        for (int i = 0; i < N; i++)
        {
            parent[i] = i;
        }

        distance[0] = 0;
        auto cmp = [&](pair<int, int> a, pair<int, int> b)
        {
            return a.second < b.second;
        };

        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> Q(cmp);
        Q.push({0, distance[0]});
        while (Q.empty() == false)
        {
            pair<int, int> temp = Q.top();
            Q.pop();

            int u = temp.first;
            int sTOu = temp.second;

            // if (visited[u] == 1)
            //     continue;
            // else
            //     visited[u] = 1;

            for (auto i : adj[u])
            {

                int v = i.first;
                if (distance[v] == -1)
                {
                    distance[v] = i.second + sTOu;
                    Q.push({v, distance[v]});
                }
                else if (distance[v] > i.second + sTOu)
                {
                    distance[v] = i.second + sTOu;

                    Q.push({v, distance[v]});
                }
            }
        }

        return distance;
    }
};

// //{ Driver Code Starts.
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, m;
//         cin >> n >> m;
//         vector<vector<int>> edges;
//         for(int i=0; i<m; ++i){
//             vector<int> temp;
//             for(int j=0; j<3; ++j){
//                 int x; cin>>x;
//                 temp.push_back(x);
//             }
//             edges.push_back(temp);
//         }
//         Solution obj;
//         vector<int> res = obj.shortestPath(n, m, edges);
//         for (auto x : res) {
//             cout << x << " ";
//         }
//         cout << "\n";
//     }
// }

// // } Driver Code Ends