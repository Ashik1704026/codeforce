#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define memset(x,v) memset(x, v, sizeof(x))
#define lcm(a,b) a*b/__gcd(a,b)
#define mp make_pair
#define pb push_back

int main(){
    fast;
    int t;
    cin >> t;
    while(t --){
        ll n;
        cin >> n;
        ll cnt = 0;
        while(n >= 2){
            ll a = 0;
            ll i = 1;
            for(;(a + (2 * i)) <= n;i ++){
                a += (2 * i) + i;
            }
            n = n - a + i - 1;
            cnt ++;
        }
        cout << cnt << "\n";
    }

    return 0;
}