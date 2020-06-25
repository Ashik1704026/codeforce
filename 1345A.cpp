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
        ll n,m;
        cin >> n >> m;
        if(n == 1 || m == 1)
            cout << "YES\n";
        else if(n == 2 && m == 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}