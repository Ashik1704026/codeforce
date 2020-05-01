#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define memset(x) memset(x, 0, sizeof(x))
#define lcm(a,b) a*b/__gcd(a,b)
#define mp make_pair
#define pb push_back

int main(){
    fast;
    int n;
    cin >> n;
    while(n --){
        ll l,r,x,cnt = 0;
        cin >> l >> r;
        for(ll i = 1;(l | i) <= r; i <<= 1) 
            l |= i;
        cout << l << "\n";
    }

    return 0;
}