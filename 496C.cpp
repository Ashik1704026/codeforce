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
    ll n,m;
    cin >> n >> m;
    string str[n];
    ll s = 0,flag = 0;
    ll ar[10000];
    for(int i = 0;i < n;i ++)
        cin >> str[i];
    for(int i = 0;i < m;i ++){
        for(int j = 1;j < n;j ++){
            if(str[j][i] < str[j - 1][i]){
                s ++;
                break;
            }
            else if(str[j][i] == str[j - 1][i])

        }
    }
    cout << s;



    return 0;
}