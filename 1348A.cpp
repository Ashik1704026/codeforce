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
    ll t;
    cin >> t;
    while(t --){
        ll n;
        cin >> n;
        ll ar[100000];
        for(ll i = 1;i <= n;i ++){
            ar[i] = (1 << i);
            //cout << ar[i] << " ";
        }
        ll s1 = ar[n],s2 = 0;
        for(ll i = 1;i < n / 2;i ++)
            s1 += ar[i];
        for(ll i = n / 2;i < n;i ++)
            s2 += ar[i];
        cout << abs (s1 - s2) << "\n";
    }
    



    return 0;
}