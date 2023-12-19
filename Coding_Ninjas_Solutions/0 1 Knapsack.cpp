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

int dptable[101][1001];

int zeroOneKnapsack(vector<vector<int>> &dptable, vector<pair<int, int>> &elements, int capacity, int index)
{
    if (index == elements.size() || capacity == 0)
    {
        dptable[index][capacity] = 0;
        return dptable[index][capacity];
    }

    if (dptable[index][capacity] != -1)
        return dptable[index][capacity];

    if (elements[index].second > capacity) /// Not take
    {
        int friend_ = zeroOneKnapsack(dptable, elements, capacity, index + 1);
        dptable[index][capacity] = friend_;
        return dptable[index][capacity];
    }
    else
    {
        /// take
        int friend_1 = elements[index].first + zeroOneKnapsack(dptable, elements, (capacity - elements[index].second), index + 1);

        /// note take
        int friend_2 = zeroOneKnapsack(dptable, elements, capacity, index + 1);

        dptable[index][capacity] = max(friend_1, friend_2);
        return dptable[index][capacity];
    }
}

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight)
{

    vector<vector<int>> dptable(n + 1, vector<int>(maxWeight + 1, -1)); /// Learn New

    vector<pair<int, int>> elements; /// value Weight

    for (int i = 0; i < n; i++)
    {
        elements.push_back({value[i], weight[i]});
    }

    // auto cmp = [&](pair<int, int> a, pair<int, int> b)
    // {
    //     return a.first * b.second > b.first * a.second;
    // };
    // sort(elements.begin(), elements.end(), cmp);   /// Not compulsory

    return zeroOneKnapsack(dptable, elements, maxWeight, 0);
}