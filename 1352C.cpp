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
        ll n,k,x,y;
        cin >> n >> k;
        x = 0;
        y = k / n;
        x += (y * n);
        k =k - (y * n) + y;
        while(y){
            y = k / n;
            x += (y * n);
            k = k - (y * n) + y;
        }
        x += k % n;
        cout << x << "\n";
    }


    


    return 0;
}