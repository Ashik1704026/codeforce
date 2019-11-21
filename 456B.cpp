#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <cstring>
#include <queue>
#include <cmath>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

const int P = 5;

int powmod(int x, int n, int P) {
    x %= P;
    int res = 1 % P;
    while (n) {
        if ((n & 1)) {
            res = (res * x) % P;
            n--;
        }
        else {
            x = (x * x) % P;
            n/=2;
        }
    }
    return res;
}

int myPow(int x, string s, int P) {
    x %= P;
    int res = 1 % P;
    int now = x;
    for (int i = (int)s.size() - 1; i >= 0; i--) {
        res = (res * powmod(now, s[i] - '0', P)) % P;
        now = powmod(now, 10, P);
        cout<<s[i]<<" "<<res<<" "<<now<<"\n";
    }
    return res;
}

int main()
{
    //freopen("input.txt", "r", stdin);

    string s;
    cin >> s;

    int res = myPow(1, s, P) + myPow(2, s, P) + myPow(3, s, P) + myPow(4, s, P);
    res %= P;

    cout << res << '\n';

    return 0;
}