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
    ll n;
    cin >> n;
    if(n <= 3)
        cout << "NO\n";
    else{
        cout << "YES\n";
        if(n %2){
            cout << "4 * 5 = 20\n20 + 2 = 22\n3 - 1 = 2\n22 + 2 = 24\n";
            for(int i = 6;i + 1 <= n;i += 2)
                cout << i + 1 <<" - " << i << " = 1\n24 * 1 = 24\n";
        }
        else{
            cout << "1 * 2 = 2\n2 * 3 = 6\n6 * 4 = 24\n";
            for(int i = 5;i + 1 <= n;i += 2)
                cout << i + 1 <<" - " << i << " = 1\n24 * 1 = 24\n";
        }
    }
    



    return 0;
}