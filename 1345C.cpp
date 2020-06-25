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
        ll n;
        cin >> n;
        ll ar[n + 10];
        ll k = 1;
        for(int i = 0;i < n;i ++)
            cin >> ar[i];
        int br[440500] = {0};
        for(int i = 0;i < n;i ++){
            int a = (n + ((ar[i] + i) % n)) % n;
            br[a] ++;
            if(br[a] > 1)
                k = 0;
        }
        if(k)
            cout << "YES\n";
        else
            cout << "NO\n";
        

    }

    return 0;
}