//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &arr , int N){
        // code here 
        int sum = 0 ;
        for (int i = 0; i < k; i++)
        {
            sum+=arr[i];
        }
        int ans = sum;
        for (size_t i = k; i < N; i++)
        {
            sum = sum - arr[i - k] + arr[i];
            ans = max(sum, ans);
        }

        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends