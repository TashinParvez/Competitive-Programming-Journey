#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {

        int cnt = 0;
        bool flag = true;

        string s;
        cin >> s;

        stack<char> stk;
        string ans = "";

        for (int i = 0; i < s.length(); i++)
        {
            ans += "()";

            if (s[i] == '(')
            {
                stk.push(s[i]);
            }
            else
            {
                if (!stk.empty() && stk.top() == '(')
                {
                    stk.pop();
                }
                else
                {
                    flag = false;
                    stk.push(s[i]);
                }
            }
        }

        // cout << "TASHIN          " << ans.find(s)<<endl;

        if (ans.find(s) == string::npos)
        {
            cout << "YES" << endl;
            cout << ans << endl;
        }
        else
        {
            string sk(s.length(), '(');
            string sk2(s.length(), ')');
            sk += sk2;

            if (sk.find(s) == string::npos)
            {
                cout << "YES" << endl;
                cout << sk << endl;
            }
            else
            {

                cout << "NO\n";
            }
        }
    }
    return 0;
}
