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
    ll t;
    cin >> t;
    while(t --){
        ll n,k,flag = 1;
        cin >> n >> k;
        string str;
        cin >> str;
        sort(str.begin(),str.end());
        if(str[0] != str[k - 1]){
            cout << str[k - 1] << "\n";
        }
        else{
            cout << str[k - 1];
            if(str[k] != str[n - 1]){
                for(int i = k;i < n;i ++)
                    cout << str[i];
                cout << "\n";
            }
            else{
                int x = k,c = ceil((n - k) * 1.0 / k);
                // cout << c;
                while(c --) 
                    cout << str[x ++];
                cout << "\n";
            }
        }
        
        
    }
    



    return 0;
}