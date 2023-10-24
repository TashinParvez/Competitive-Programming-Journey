
//        ****************  Author :  Tashin.Parvez  *************************\\
//        ****************  Updated:  06-04-23       *************************\\

#include<bits/stdc++.h>

//data_type_compressions :

#define     int                long long
#define     ll                 long long int
#define     ull                unsigned long long int
#define     ld                 long double

//I/O :
#define     faster             ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define     sin(x)             scanf("%d", &x)  // in
#define     output(x)           cout<<x<<endl;  // out

#define     YES                printf("YES\n");
#define     Yes                printf("Yes\n");
#define     NO                 printf("NO\n");
#define     No                 printf("No\n");
#define     nl                 "\n"

using namespace std;


void solution()
{
    //====================== Input one word =======================

    //    string s;
    //   cin>>s;        // one word
    //    cout<<s<<endl;;



//====================== Input a line =======================

//    string s2;
//    getline(cin,s2);     // take line
//    cout<<s2<<nl;



//====================== string concatenation =======================

//    string s1 = "Fam";
//    string s2 = "ily";

//    s1.append(s2);
//    s1+=s2;         // same as append
//    output(s1);
//
//    cout<<s1+s2<<nl;



//====================== Clear a string data =======================

//    string abc = "ASSSSSSSSSSDASdasdas";
//    abc.clear();
//    output(abc);



//====================== String Compare =======================

//    string a = "baa";
//    string b = "aaaaaaaaa";
//
//    output(a.compare(b));

    /*     (s1.compare(s2)) < 0  s1 << " is smaller than " << s2
     *
     *     (s1.compare(s1)) == 0  s1 << " is equal to " << s1
     *
     *     (s1.compare(s2)) > 0  s1 << " is grater than " << s2
     */



//====================== String Empty check =======================

//    string a = "String is not Empty";
//    output(a.empty()); // empty()   return true or false
//
//    string b ="";
//    output(b.empty());



//====================== erase SOMETHING From a String =======================

//    string s = "UI1234567U";
//    output(s);
//    s.erase(2,7);
//    output(s);

    /*     remove charecters from a string
     *     erase(x,y)
     *     x = from which index [that index will not erase]
     *     y = how many charecters.
     */




//====================== Find SOMETHING From a String =======================


//    string str = "CPISMUSTFORACSESTUDENT";
//    output(str.find("CSE"));  // output the first index of the finding string
//    output(str.find("S"));  // output the first index of the finding string




//====================== Insert SOMETHING in a String =======================

//    string s = "MyIsTashinParvez";
//    output(s);
//    s.insert(2,"Name"); // in which index you want to push and what to enter
//    output(s);



//====================== Imput SOMETHING in a String  or increment string length =======================

//    string s;
//
//    s+='T';
//    s+='A';
//    s+='S';
//    s+='H';
//    s+='I';
//    s+='N';
//
//    cout<<s;




//====================== Length/Size of a String =======================

// string s = "TashinParvez";
// output(s.length());
// output(s.size());



//====================== SubString =======================

//    string s = "I am Tashin Parvez";
//
//    output(s.substr(5,6));
//    output(s.substr(12,6));

    /*     substr(x,y) -- >
     *     x = from which index [that index is not included ]
     *     y = how many index
     */


//====================== String to Number ======================= string to int 

//    string num = "786";
//    int n = stoi(num);
//    output(n);



//====================== Number to String ======================= int to string 

//    int n= 786;
//    string  num = to_string(n);
//    output(num);



//====================== String Sort =======================

//    string abc = "asdarewasdasda";
//    output(abc);
//    sort(abc.begin(),abc.end());
//    output(abc);









}

int32_t main()
{
    faster;

    solution();



    return 0;
}
