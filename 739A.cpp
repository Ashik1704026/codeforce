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
    int n,m;
    cin >> n >> m;
    int mn = 9999999;
    while(m --){
        int l,r;
        cin >> l >> r;
        mn = min(r - l + 1,mn);
    }
    cout << mn << "\n";
    while(n)
        cout << (n % mn) << " ",n --;    


    return 0;
}