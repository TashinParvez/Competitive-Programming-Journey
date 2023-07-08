#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char a[3][3];
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                cin >> a[i][j];

        int flag = 1;
        
        char c;
        c = a[0][0];
        if ((c == a[0][1] && c == a[0][2] && c != '.') || (c == a[1][0] && c == a[2][0] && c != '.') ||
            (c == a[1][1] && c == a[2][2] && c != '.'))
        {
            cout << c << endl;
            flag = 0;
        }

        c = a[0][1];
        if (c == a[1][1] && c == a[2][1] && c != '.')
        {
            cout << c << endl;
            flag = 0;
        }
        c = a[1][0];
        if (c == a[1][1] && c == a[1][2] && c != '.')
        {
            cout << c << endl;
            flag = 0;
        }
        c = a[2][0];
        if (c == a[2][1] && c == a[2][2] && c != '.')
        {
            cout << c << endl;
            flag = 0;
        }

        c = a[0][2];
        if ((c == a[1][2] && c == a[2][2] && c != '.') || (c == a[1][1] && c == a[2][0] && c != '.'))
        {
            cout << c << endl;
            flag = 0;
        }

        if (flag == 1)
            cout << "DRAW" << endl;
    }
    return 0;
}
