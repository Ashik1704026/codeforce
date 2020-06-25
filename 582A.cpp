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
    int n;
    cin >> n;
    ll ar[n * n];
    ll ans[n + 10] = {0};
    map<ll,ll> cnt;
    for(int i = 0;i < n * n;i ++){
        cin >> ar[i];
        cnt[-ar[i]] ++;
    }
    int pos = n - 1;
    map<ll,ll> :: iterator it;
    for(it = cnt.begin();it != cnt.end();it ++){
        ll v = -it -> first;
        while(it -> second > 0){
            ans[pos] = v;
            -- it -> second;
            for(int i = pos + 1;i < n;i ++)
                cnt[-(__gcd(v,ans[i]))] -= 2;
            pos --;
            // cout << x.first;
        }
    }
    for(int i = 0;i < n;i ++)
        cout << ans[i] << " ";


    return 0;
}