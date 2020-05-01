#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define memset(x,v) memset(x, v, sizeof(x))
#define lcm(a,b) a*b/__gcd(a,b)
#define mp make_pair
#define pb push_back

int main(){
    ll n,m;
    cin >> n >> m;
    int ar[m + 10];
    int flag = 0;
    for(int i = 1;i <= m;i ++){
        cin >> ar[i];
        if(n - ar[i] + 1 < i)
            flag = 1;
    }
    if(flag){
        cout << "-1\n";
        return 0;
    }
    ll sum[m + 10];
    memset(sum,0);
    for(int i = m;i > 0;i --)
        sum[i] = sum[i + 1] + ar[i];
    if(sum[1] < n){
        cout << "-1\n";
        return 0;
    }
    for(ll i = 1;i <= m;i ++){
        cout << (ll) max(i,n - sum[i] + 1) << " ";
    }
    



    return 0;
}