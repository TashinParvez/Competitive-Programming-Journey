#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        int a,b;
        cin>>a>>b;
        int count =0;
        for(int ii=a; ii<b; ii++)
        {
         //   cout<<(int)sqrt(ii)<<" ";
            int flag =0;
            for(int j=2;j<(int)sqrt(ii); j++)
            {
                if(i%j==0)
                {
                    break;
                    //  flag++;
                }
               // if(flag>0)
            }
            if(flag=0)
                count++;
        }

        cout<<count;

    }

    return 0;
}
