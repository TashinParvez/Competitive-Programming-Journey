
//        ****************  Author :  Tashin.Parvez  ****************
//        ************* United International University *************
//        ****************  Updated:    27/10/23     ****************
#include <bits/stdc++.h>
using namespace std;


//------------------------------------------ Today  --------------------------------
#define deb(n) cout << "Tashin   " << #n << " = " << n << endl; // debug

#define si(n) cin >> n; // input

//------------------------------------------ FOR --------------------------------
#define FOR0(i, n) for (int i = 0; i < (int)(n); i++)  // 0 to < N
#define FOR1(i, n) for (int i = 1; i <= (int)(n); i++) // 1 to <= N
#define FOR2(a, n) for (int i = a; i < n; i++) // A to < N

// vector
#define pb     push_back
#define pop     pop_back

#define vsort(v)       sort(v.begin(), v.end())                    // Vector asc
#define vSortRev(v)    sort(v.begin(), v.end(), greater<int>())    // Vector dec

#define arrSort(a)     sort(a, a + n)                              // array asc
#define arrSortRev(a)  sort(a, a + n, greater<int>())              // array dec

#define tolower(s) transform(s.begin(), s.end(), s.begin(), ::tolower) 

typedef pair<int, int> pii; 

#define sp " "

#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vb vector<bool>

#define checkEqual(a, b, c) \
    if (a == b && a == c)   \
        return 1 else return 0; 
        
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>

#define minusone cout << "-1" << el

#define max3(a, b, c)   max(max(a, b), c) 
#define min3(a, b, c)   min(min(a, b), c)  
#define mid3(a, b, c)   a+b+c-max3(a, b, c)-min3(a, b, c)


 #define SumInRange(a, b) ((b * (b + 1)) / 2) - (((a - 1) * (a)) / 2) 

//------------------------------------------ end of Used  --------------------------------




//  4.  add big mod


// FOR(0, a.length())
// {
//     if (a[i] != b[i])
//     {
//         flag = false;
//         break;
//     }
// }



/*
fora(i,n){
        int temp;
        cin>>temp;
        sum+=temp;
    }
*/
const double E = 2.718281828459045;

/**************************************** Need to add Func ***********************************************/



// Get All The Divisors Of That Number
vector<int> getdiv(int n) 
{
    vector<int> ans;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ans.pb(i);
            if (n / i != i)
            {
                ans.pb(n / i);
            }
        }
    }
    return ans;
}

// to get the prime factors of that number
vector<int> getprimefac(int n)
{
    vector<int> ans;
    int nn = n;
    for (int i = 2; i * i <= n; i++)
    {
        if (nn % i == 0)
        {
            ans.pb(i);
            while (nn % i == 0)
            {
                nn /= i;
            }
        }
    }
    if (nn > 1)
    {
        ans.pb(nn);
    }
    return ans;
}
// get instant prime
vector<int> sieve(int n)
{
    int *a = new int[n + 1]();
    vector<int> vect;
    for (int i = 2; i <= n; i++)
    {
        if (a[i] == 0)
        {
            vect.push_back(i);
            for (int j = i * i; j <= n; j += i)
            {
                a[j] = 1;
            }
        }
    }
    return vect;
}
/********************************************************************************/

#define take_the_array_INT(x, o, n) \
    for (int i = o; i <= n; i++)    \
    {                               \
        scanf("%d", &x[i]);         \
    }

#define take_the_array_LL(x, o, n) \
    for (int i = o; i <= n; i++)   \
    {                              \
        scanf("%lld", &x[i]);      \
    }

#define take_the_array_DBL(x, o, n) \
    for (int i = o; i <= n; i++)    \
    {                               \
        scanf("%lf", &x[i]);        \
    }

#define print_the_array_INT(x, o, n) \
    for (int i = o; i <= n; i++)     \
    {                                \
        printf("%d ", x[i]);         \
    }                                \
    printf("\n");


#define print_the_array_LL(x, o, n) \
    for (int i = o; i <= n; i++)    \
    {                               \
        printf("%lld ", x[i]);      \
    }                               \
    printf("\n");

#define cin_the_array(x, o, n)   \
    for (int i = o; i <= n; i++) \
    {                            \
        cin >> x[i];             \
    }

#define cout_the_array(x, o, n)  \
    for (int i = o; i <= n; i++) \
    {                            \
        cout << x[i] << " ";     \
    }                            \
    cout << endl;


#define printa(a, L, R)         \
    for (int i = L; i < R; i++) \
    cout << a[i] << (i == R - 1 ? '\n' : ' ')

#define printv(a) printa(a, 0, a.size())

/********************************************************************************/

#define sf(a) scanf("%d", &a)
#define sfl(a) scanf("%lld", &a)
#define sfc(a) scanf("%c", &a)
#define sff(a, b) scanf("%d %d", &a, &b)
#define sffl(a, b) scanf("%lld %lld", &a, &b)
#define sfff(a, b, c) scanf("%d %d %d", &a, &b, &c)
#define sfffl(a, b, c) scanf("%lld %lld %lld", &a, &b, &c)


//------------------------------------------ template --------------------------------
template <typename T, typename V>
void __print(const pair<T, V> &x)
{
    cout << '{';
    __print(x.first);
    cout << ',';
    __print(x.second);
    cout << '}';
}

template <typename T>
void __print(const T &x)
{
    int f = 0;
    cout << '{';
    for (auto &i : x)
        cout << (f++ ? "," : ""), __print(i);
    cout << "}";
}

void _print() { cout << "]\n"; }

template <typename T, typename... V>
void _print(T t, V... v)
{
    __print(t);
    if (sizeof...(v))
        cout << ", ";
    _print(v...);
}
