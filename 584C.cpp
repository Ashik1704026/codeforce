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
    int n,t;
    cin >> n >> t;
    string str1,str2;
    cin >> str1 >> str2;
    string sol(n,0);
    int mil = n - t;
    for(int i = 0;i < n;i ++){
        if(mil == 0)
            break;
        if(str1[i] == str2[i]){
            sol[i] = str1[i];
            mil --;
        }
    }
    int x = mil,y = mil;
    for(int i = 0;i < n;i ++){
        if(sol[i] == 0){
            if(x){
                sol[i] = str1[i];
                x --;
                continue;
            }
            if(y){
                sol[i] = str2[i];
                y --;
            }
        }
    }
    for(int i = 0;i < n;i ++){
        if(sol[i] == 0){
            for(char a = 'a';a <= 'z';a ++){
                if(a != str1[i] && a != str2[i]){
                    sol[i] = a;
                    break;
                }
            }
        }
    }
    if(y == 0)
        cout << sol <<"\n";
    else
        cout << "-1\n";   



    return 0;
}