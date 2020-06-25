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
    int n,k;
    cin >> n >> k;
    string str,sol;
    cin >> str;
    int flag = 0;
    for(int i = 0;i < n;i ++)
        sol += str[i % k];
    if(sol < str){
        for(int i = k - 1;i >= 0;i --)
            if(str[i] == '9')
                str[i] = '0';
            else{
                str[i] ++;
                break;
            }
    }
    cout << n << "\n";
    for(int i = 0;i < n;i ++)
        cout << str[i % k];

    return 0;
}