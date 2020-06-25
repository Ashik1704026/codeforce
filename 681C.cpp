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
    priority_queue<ll> pq;
    vector<pair<string,ll> > v;
    vctri vo;
    for(int i = 0;i < n;i ++){
        string ch;
        ll a;
        cin >> ch;
        if(ch[0] == 'i'){
            cin >> a;
            v.pb(mp("insert",a));
            pq.push(-a);
        }
        if(ch[0] == 'r'){
            if(pq.empty()){
                v.pb(mp("insert",1));
                v.pb(mp("removeMin",0));
                continue;
            }
            v.pb(mp("removeMin",0));
            pq.pop();
        }
        if(ch[0] == 'g'){
            cin >> a;
            if(pq.empty()){
                pq.push(-a);
                v.pb(mp("insert",a));
                v.pb(mp("getMin",a));
                continue;
            }
            int x = -pq.top();
            while(x < a && !pq.empty()){
                v.pb(mp("removeMin",0));
                pq.pop();
                x = -pq.top();
            }
            if(pq.empty() || x > a){
                pq.push(-a);
                v.pb(mp("insert",a));
                v.pb(mp("getMin",a));
            }
            else{
                v.pb(mp("getMin",a));
            }
        }
    }
    cout << v.size() << "\n";
    for(int i = 0;i < v.size();i ++){
        string str;
        ll a;
        str = v[i].F,a = v[i].S;
        if(str[0] == 'r')
            cout << v[i].F << "\n";
        else
            cout << v[i].F << " " << v[i].S << "\n"; 
    }
    
     


    return 0;
}