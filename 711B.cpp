#include<bits/stdc++.h>
using namespace std;

#define         ll         long long
#define         pb         push_back
#define         scn(x)     scanf("%d",&x)
#define         scnl(x)    scanf("%lld",&x)
#define         prnt(x)    printf("%d\n",x)
#define         prntl(x)   printf("%lld\n",x)
#define         prii       pair<int,int>
#define         mapii      map<int,int>
#define         mapll      map<ll,ll>
#define         mapci      map<char,int>
#define         mapcl      map<char,ll>
#define         mapsi      map<string,int>
#define         mapsl      map<string,ll>
#define         prll       pair<ll,ll>
#define         vctri      vector<int>
#define         vctrl      vector<ll>
#define         vctrd      vector<double,double>
#define         all(a)     (a).begin(),(a).end()
#define         rall(a)    (a).rbegin(),(a).rend()
#define         F          first
#define         S          second
#define         mp         make_pair
#define         ftc(x)     cerr << #x << ": " << x << " " << '\n';
#define         PI         acos(-1)
#define         lcm(a,b)   ((a*b)/__gcd(a,b))
#define         fast       ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define         sqr(a)     ((a)*(a))
#define         memset(x,v) memset(x, v, sizeof(x))
#define         ask         '\n'
#define         negmod(x,y) ((x % y) + y) % y    

vector<bool> isPrime(10000010, true);
inline void seivePrime(ll L, ll R) { ll lim = sqrt(R);for (ll i = 2; i <= lim; ++i){
        for (ll j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
            isPrime[j - L] = false;}if (L == 1)isPrime[0] = false;}
inline ll chckPrime(ll prme,ll L){return isPrime[prme - L];}
inline ll cntPrime(ll L,ll R){return count(isPrime.begin(),isPrime.begin() + R - L + 1,true);}



int main(){
    fast;
    int n;
    cin >> n;
    ll ar[n][n];
    ll rs[n];
    ll s = 0;
    int r = 0,c = 0;
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < n;j ++){
            ll a;
            cin >> a;
            ar[i][j] = a;
            s += a;
            if(a == 0)
                r = i,c = j;
        }
        rs[i] = s;
        s = 0;
    }
    if(n == 1){
        cout << "1\n";
        return 0;
    }
    sort(rs,rs + n);
    ll d = rs[1] - rs[0];
    if(d == 0){
        cout << "-1\n";
        return 0;
    }
    ar[r][c] = d;
    s = rs[1];
    for(int i = 0;i < n;i ++){
        ll s1 = 0;
        for(int j = 0;j < n;j ++)
            s1 += ar[i][j];
        if(s1 != s){
            cout << "-1\n";
            return 0;
        }
    }
    for(int i = 0;i < n;i ++){
        ll s1 = 0;
        for(int j = 0;j < n;j ++)
            s1 += ar[j][i];
        if(s1 != s){
            cout << "-1\n";
            return 0;
        }
    }
    ll s1 = 0;
    for(int i = 0;i < n;i ++)
        s1 += ar[i][i];
    if(s != s1){
        cout << "-1\n";
        return 0;
    }
    s1 = 0;
    for(int i = 0;i < n;i ++)
        s1 += ar[i][n - i - 1];
    if(s != s1){
        cout << "-1\n";
        return 0;
    }
    cout << d << "\n";
    

    return 0;
}