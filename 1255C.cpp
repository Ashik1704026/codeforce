// MD. Ashiqur Rahman
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
inline ll chckPrime(ll L,ll prme){return isPrime[prme - L];}
inline ll cntPrime(ll L,ll R){return count(isPrime.begin(),isPrime.begin() + R - L + 1,true);}



int main(){
    fast;
    int n;
    cin >> n;
    vctri v[n + 10];
    int a[n + 10] = {0},b[n + 10] = {0},c[n] = {0};
    for(int i = 0;i < n - 2;i ++){
        int x,y,z;
        cin >> x >> y >> z;
        a[x] ++,a[y] ++,a[z] ++;
        v[x].pb(y),v[x].pb(z);
        v[y].pb(x),v[y].pb(z);
        v[z].pb(x),v[z].pb(y);
    }
    int f,g,h;
    for(int i = 1;i <= n;i ++)
        if(a[i] == 1){
            f = i;
            b[i] = 1;
            break;
        }
    cout << f << " ";
    for(auto x : v[f]){
        if(a[x] == 2){
            cout << x << " ";
            g = x;
            b[x] = 1;
            break;
        }
    }
    for(int i = 0;i < n - 2;i ++){
        for(int j = 0;j < v[f].size();j ++){
            if(!b[v[f][j]]){
                cout << v[f][j] << " ";
                b[v[f][j]] = 1;
                h = v[f][j];
            }
        }
        f = g;
        g = h;
    }
    
     


    return 0;
}