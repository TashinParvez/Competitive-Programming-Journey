//        ****************  Author :  Tashin.Parvez  *************************\
//        ****************  Updated:    18-08-23     *************************\
// Content link: https://www.youtube.com/watch?v=ytyOI1RkZ24&list=PLauivoElc3ggagradg8MfOZreCMmXMmJ-&index=30

#include <bits/stdc++.h>
#define CRACKED return 0;
#define nl endl // NewLine
#define null NULL
#define br cout << nl << nl;
using namespace std;

void printP_vector(vector<pair<int, int>> &p_vectr) // print vector of pair
{
    for (int i = 0; i < p_vectr.size(); i++)
    {
        cout << p_vectr[i].first << " " << p_vectr[i].second << nl;
    }
    br;
}

void printVector(vector<int> &arr) // normal print vector
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << nl;
}

int32_t main()
{
    /****************************** Vector of Pairs **************************************************/

    vector<pair<int, int>> v; // [ {1,2}, {3,4}, {5,6}......   ] one index store 2 value
    for (int i = 0; i < 10; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y}); // pushing pair in a vector index
    }

    printP_vector(v); // print Func

    /****************************** Array of vectors **************************************************/
    /********* 2D Array but number of rows are fixed but num of colum are not fixed ******************/

    int N;
    cin >> N;
    vector<int> arr[N]; // creating array so size must be given
    /*                     N size of array and array index is a vector
                           [v1, v2, v3.....]
    */

    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n; // taking particular indexVector Size

        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            arr[i].push_back(a); // i indexVector
        }
    }

    for (int i = 0; i < N; i++)
    {
        printVector(arr[i]); // calling normal print vector
    }

    /****************************** vector of vectors **************************************************/
    /**************** 2D Array but num of rows and colum are not fixed *********************************/

    vector<vector<int>> vov; // er index of v is a vector and v is also a vector
    int len;
    cin >> len;
    // taking Input
    for (int i = 0; i < len; i++) // len of V vector is len
    {
        int n;
        cin >> n;
        vector<int> tmp;

        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            tmp.push_back(a); // i indexVector
        }
        vov.push_back(tmp);
    }

    vov.push_back(vector<int>()); // input empty vector

    // printing vector of vector
    for (int i = 0; i < vov.size(); i++)
    {
        printVector(vov[i]); // normal print vector
    }

    /****************************************** END **************************************************/
    CRACKED;
}