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


ll MOD;
inline void modulas(ll a) {MOD = a;}
inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }

vector<bool> isPrime(10000010, true);
inline void seivePrime(ll L, ll R) { ll lim = sqrt(R);for (ll i = 2; i <= lim; ++i){
        for (ll j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
            isPrime[j - L] = false;}if (L == 1)isPrime[0] = false;}
inline ll chckPrime(ll L,ll prme){return isPrime[prme - L];}
inline ll cntPrime(ll L,ll R){return count(isPrime.begin(),isPrime.begin() + R - L + 1,true);}



int main(){
    fast;
    int t;
    cin >> t;
    while(t --){
        string s,sol = "abcdefghijklmnopqrstuvwxyz";
        cin >> s;
        if(s.size() == 1){
            cout << "YES\n" << sol << "\n";
            continue;
        }
        set<char> g[30];
        int visited[100] = {0};
        for(int i = 0;i < s.size();i ++){
            if(i == 0 && i + 1 < s.size()){
                g[s[i] - 'a'].insert(s[i + 1]); 
                continue;
            }
            else if(i == s.size() - 1 && i -1 >= 0){
                g[s[i] - 'a'].insert(s[i - 1]);
                continue;
            }
            else if(i != 0){
                g[s[i] - 'a'].insert(s[i - 1]);
                g[s[i] - 'a'].insert(s[i + 1]);
            }
        }
        int cnt = 0,on = -1,th = 0;
        for(int a = 0;a < 26;a ++){
            for(auto x : g[a])
                cnt ++;
            if(cnt == 1)
                on = a;
            if(cnt > 2)
                th = 1;
            cnt = 0;
        }
        if(th == 1 || on == -1){
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        queue<int>q;
        q.push(on);
        cout << sol[on];
        visited[on] = 1;
        while(!q.empty()){
            int u = q.front();
            q.pop();
            for(auto x : g[u]){
                int a = x - 'a';
                if(!visited[a]){
                    cout << x ;
                    visited[a] = 1;
                    q.push(a);
                }
            }
        }
        for(int i = 0;i < 26;i ++)
            if(!visited[i])
                cout << sol[i];
        cout << "\n";
    }



    return 0;
}