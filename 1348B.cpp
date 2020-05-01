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
        ll n,k;
        cin >> n >> k;
        set<ll>s;
        vector<ll> v;
        ll ar[100000];
        for(int i = 0;i < n;i ++){
            ll a;
            cin >> a;
            s.insert(a);
            ar[i] = a;
        }
        if(s.size() > k){
            cout << "-1\n";
        }
        else{
            ll e = k - s.size();
            for(auto x : s)
                v.pb(x);
            ll flag = 1;
                for(int i = 1;i <= 100 && e;i ++){
                    for(auto x : s){
                        if(x == i)
                            flag = 0;
                    }
                    if(flag){
                        v.pb(i);
                        e --;
                    }
                    flag = 1;
                }

            cout << n * v.size() <<"\n";
            for(int i = 0;i < n * v.size();i ++)
                cout << v[i % k] << " ";
            cout << "\n";
        }
    }
    



    return 0;
}