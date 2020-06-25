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
    ll s1 = 1,s2 = 2,cnt = 1;
    while(s1 + s2 <= n){
        ll temp = s1;
        s1 = s2;
        s2 += temp;
        cnt ++;
    }
    cout << cnt;

    



    return 0;
}