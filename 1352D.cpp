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
        int n;
        cin >> n;
        int ar[n];
        deque<int>v;
        for(int i = 0;i < n;i ++){
            cin >> ar[i];
            v.pb(ar[i]);
        }
        ll s1 = v.front();
        v.pop_front();
        ll s2 = 0,sum = s1;
        ll x = 1,y = 0,z = 1;
        while(!v.empty()){
            y = 0;
            if(x){
                while(y <= sum && !v.empty()){
                    y += v.back();
                    v.pop_back();
                }
                s2 += y;
                sum = y;
            }
            else{
                while(y <= sum && !v.empty()){
                    y += v.front();
                    v.pop_front();
                }
                s1 += y;
                sum = y;
            }
            x ^= 1;
            z ++;
        }
        cout << z << " " << s1 << " " << s2 << "\n";
    }


    


    return 0;
}