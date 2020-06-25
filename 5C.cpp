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
    string str;
    cin >> str;
    int ar[1000020],a = 1,b = 0,c = 0;
    int br[1000020];
    memset(ar,0);
    memset(br,0);
    for(int i = 0;i < str.size();i ++){
        if(str[i] == '(') ar[++ c] = i;
        else if(c){
            br[i] = i - ar[c] + 1 + br[ar[c] - 1];
            c --;
            if(b == br[i]) a ++;
            else if(b < br[i]) 
                b = br[i] , a = 1;
        }
    }
    cout << b << " " << a;


    return 0;
}