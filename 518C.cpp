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
    int n,m,k;
    cin >> n >> m >> k;
    int ar[n + 10];
    int br[n + 10];
    for(int i = 1;i <= n;i ++){
        int a;
        cin >> a;
        br[i] = a;
        ar[a] = i;
    }
    ll s = 0;
    for(int i = 0;i < m;i ++){
        int a;
        cin >> a;
        int pos = ar[a];
        int x = ceil((pos * 1.0) / (k * 1.0));
        s += x;
        if(pos != 1){
            int b = br[pos - 1];
            br[pos] = b;
            br[pos - 1] = a;
            ar[a] = pos - 1;
            ar[b] = pos;
            // cout << b << " " << a << " ";
        }
        // cout << pos << " ";
    }
    // for(int i = 1;i <= n;i ++)
    //     cout << ar[i] << " ";
    cout << s;

    return 0;
}