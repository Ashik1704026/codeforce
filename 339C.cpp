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
    string str;
    cin >> str;
    ll m;
    cin >> m;
    vector<ll> v,sol;
    ll ar[20] = {0};
    for(int i = 9;i >= 0;i --){
        if(str[i] == '1'){
            ar[i + 1] = i + 1;
            v.pb(i + 1);
        }
        else
            ar[i + 1] = ar[i + 2];
    }
    for(int i = 2;i <= 10;i ++)
        if(ar[i] == 0)
            ar[i] = ar[i - 1];
    sort(v.begin(),v.end());
    if(v.size() < 1){
        cout << "NO\n";
    }
    else if(v.size() == 1 && m > 1){
        cout << "NO\n";
    }
    else if(v.size() == 1 && m == 1){
        cout << "YES\n" << v[0];
    }
    else{
        for(int a = 0;a < v.size() - 1;a++){
        ll s = v[a],l = v[a + 1],cnt = 1,x = 1;
        ll s1 = s,s2 = l,ps = l;
        sol.pb(s);
        while(l > s && cnt < m){
            //cout << s << " " << l << " ";
            sol.pb(ps);
            ll i,sm = l - s + 1;
            //cout << sm << " ";
            for(i = sm;ps == ar[i];)
                i ++;
            sm = ar[i];
            //cout << sm << "\n";
            cnt ++;
            if(x % 2){
                s1 += sm;
                s = s2;
                l = s1;
            }
            else{
                s2 += sm; 
                s = s1;
                l = s2;
            }
            ps = sm;
            x ++;
        }
        if(cnt == m){
            cout << "YES\n";
            for(ll j = 0;j < sol.size();j ++)
                cout << sol[j] << " ";
            return 0;
        }
        sol.clear();
        }
        cout << "NO\n";
    }
    



    return 0;
}