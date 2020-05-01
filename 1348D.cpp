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
        vector<ll> v;
        for(ll i = 1;i <= n;i *= 2){
            v.pb(i);
            n -= i;
        }
        if(n == 0){
            cout << v.size() - 1 << "\n";
            for(int i = 1;i < v.size();i ++)
                cout << v[i] - v[i - 1] << " ";
            cout << "\n";
        }
        else{
            v.pb(n);
            cout << v.size() - 1 <<"\n";
            sort(v.begin(),v.end());
            for(int i = 1;i < v.size();i ++)
                cout << v[i] - v[i - 1] << " ";
            cout << "\n";
        }
    }
    



    return 0;
}