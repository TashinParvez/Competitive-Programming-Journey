
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

// bool cmp(int a, int b)
// {
//     if (a <= b)
//         return false;
//     else
//         return true;
// };

int main()
{

    auto compare = [&](int a, int b) /// lamda function
    {
        if (a <= b)
            return false;
        else
            return true;
    };

    priority_queue<int, vector<int>, decltype(compare)> PQ(compare);

    PQ.push(10);
    PQ.push(20);
    PQ.push(15);
    PQ.push(30);
    PQ.push(50);
    PQ.push(40);

    while (PQ.empty() == false)
    {
        cout << PQ.top() << " ";
        PQ.pop();
    }

    if (PQ.empty() == true)
        cout << "Empty\n";

    return 0;
}
