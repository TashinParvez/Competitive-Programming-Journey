//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> maxMeetings(int N, vector<int> &S, vector<int> &F)
    { 

        vector<pair<int, pair<int, int>>> vii;

        vector<int> answer;

        for (auto i = 0; i < N; i++)
        {
            vii.push_back({i + 1, {S[i], F[i]}});
        }

            sort(vii.begin(), vii.end(), [&](pair<int, pair<int, int>> a, pair<int, pair<int, int>> b)
             {
                 if (a.second.second < b.second.second)
                 { 
                     return true;
                 }
                 else if (a.second.second == b.second.second)
                 {
                     return a.first < b.first; 
                 }
                 else
                     return false; });
                     

        answer.push_back(vii[0].first);
        int availability = vii[0].second.second;

        for (auto i = 1; i < N; i++)
        {
            if (availability < vii[i].second.first)
            {
                answer.push_back(vii[i].first);
                availability = vii[i].second.second;
            }
        }
        
        sort(answer.begin(),answer.end());
        return answer;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> S(n),F(n);
        for(int i=0;i<n;i++){
            cin>>S[i];
        }
        for(int i=0;i<n;i++){
            cin>>F[i];
        }
        Solution ob;
        vector<int> ans=ob.maxMeetings(n,S,F);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
            if(i!=ans.size()-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends