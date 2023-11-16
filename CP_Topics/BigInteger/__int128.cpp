#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

/***************************** For print the __int12 ****************************************/
// Does not run in vscode but runs in online judge

std::ostream& operator << (std::ostream& dest, __int128_t value) {
    std::ostream::sentry s(dest);
    if (s) {
        __uint128_t tmp = value<0?-value:value;
        char buffer[128];
        char* d = std::end(buffer);
        do {
            -- d;
            *d = "0123456789"[tmp%10];
            tmp/=10;
        }while(tmp!=0);
        if(value<0) {
            --d;
            *d = '-';
        }
        int len = std::end(buffer)-d;
        if (dest.rdbuf()->sputn(d,len)!=len) {
            dest.setstate(std::ios_base::badbit);
        }
    }
    return dest;
}


int main() {
	__int128 n = 1e20;
	cout<<n;
}
