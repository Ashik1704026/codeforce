
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
    int n,m;
    cin >> n >> m;
    int ar[n + 10] = {0};
    for(int i = 0;i < m;i ++){
        int a,b,c;
        cin >> a >> b >> c;
        int x = ar[a],y = ar[b],z = ar[c];
        if(x + y + z == 0)
            ar[a] = 1,ar[b] = 2,ar[c] = 3;
        else if(ar[a] == 0){
            if(y && z)
                ar[a] = 6 - y - z;
            else if(y){
                ar[a] = ((6 - y) / 2)  + 1;
                ar[c] = 6 - ar[b] - ar[a];
            }
            else if(z){
                ar[a] = ((6 - z) / 2) + 1;
                ar[b] = 6 - ar[c] - ar[a];
            }
            // cout << "a";
            // cout << ar[a] << ar[b] << ar[c];
        }
        else if(ar[b] == 0){
            if(x && z)
                ar[b] = 6 - x - z;
            else if(x){
                ar[b] = ((6 - x) / 2) + 1;
                ar[c] = 6 - ar[b] - ar[a];
            }
            else if(z){
                ar[b] = ((6 - z) / 2) + 1;
                ar[a] = 6 - ar[b] - ar[c];
            }
            // cout << "b";
            // cout << ar[a] << ar[b] << ar[c];
        }
        else if(ar[z] == 0){
            if(y && x)
                ar[c] = 6 - y - x;
            else if(y){
                ar[c] = ((6 - y) / 2) + 1;
                ar[a] = 6 - ar[b] - ar[c];
            }
            else if(x){
                ar[c] = ((6 - x) / 2) + 1;
                ar[b] = 6 - ar[c] - ar[b];
            }
            // cout << "c";
            // cout << ar[a] << ar[b] << ar[c];
        }
    }
    for(int i = 1;i <= n;i ++)
        cout << ar[i] << " ";
    

    return 0;
}