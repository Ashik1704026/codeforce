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
    ll n,l;
    cin >> n;
    l = n;
    string str,chr;
    cin >> str;
    chr = str;
    ll s = 0;
    sort(str.begin(),str.end());
    for(int i = 0;i < l;i ++){
        char ch = str[i];
        for(int j = 0;j < chr.size();j ++){
            if(chr[j] == ch){
                int x = chr[j - 1];
                int y = chr[j + 1];
                int m = chr[j];
                // cout << x << " " << y << " " << j <<"\n";
                if(abs(x -m) == 1 || abs(y - m) == 1)
                    chr.erase(chr.begin() + j);
            }
        }
    }
    cout << l - chr.size();
    



    return 0;
}