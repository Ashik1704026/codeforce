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
    ll k;
    cin >> k;
    ll a,b;
    a = 262143;
    b = 131072;
    ll ar[10][10];
    ar[1][1] = a,ar[1][2] = k,ar[1][3] = k,ar[1][4] = b;
    ar[2][1] = b,ar[2][2] = b,ar[2][3] = k,ar[2][4] = b;
    ar[3][1] = b,ar[3][2] = b,ar[3][3] = a,ar[3][4] = k;
    cout << "3 4\n";
    for(int i = 1;i <= 3;i ++){
        for(int j = 1;j <= 4;j ++)
            cout << ar[i][j] << " ";
        cout << "\n";
    }
    



    return 0;
}