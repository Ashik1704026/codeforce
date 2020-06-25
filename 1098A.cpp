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
    ll n,f = 2*10e9;
    cin >> n;
    ll p[n + 10];
    p[1] = 0;
    for(int i = 2;i <= n;i ++)
        cin >> p[i];
    ll s[n + 10];
    ll st[n + 10];
    st[0] = 0;
    for(int i = 1;i <= n;i ++){
        cin >> st[i];
        s[i] = st[i];
        if(st[i] < 0)
            st[i] = f;
    }
    ll vs[n + 10] = {0};
    for(int i = n;i > 1; i--){
        if(st[i] < st[p[i]])
            st[p[i]] = st[i]; 
    }
    ll sum = 0;
    // for(int i = 1;i <= n;i ++)
    //     cout << st[i] << " ";
    for(int i = 1;i <= n;i ++){
        if(s[i] >= 0 && st[i] != s[i] ){
            cout << "-1\n";
            return 0;
        }
        else if(st[i] != f)
            // cout << st[i] << " " << st[p[i]] << ".";
            sum += st[i] - st[p[i]];
    }
    cout << sum << "\n";

    return 0;
}