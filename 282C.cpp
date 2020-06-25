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
    string str1,str2;
    cin >> str1 >> str2;
    ll f1 = 0,f2 = 0;
    if(str1.size() == str2.size()){
        if(str1 == str2){
            cout << "YES\n";
            return 0;
        }
        for(int i = 0;i < str1.size();i ++){
            if(str1[i] == '1')
                f1 = 1;
            if(str2[i] == '1')
                f2 = 1;
        }
        if(f1 & f2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    else
        cout << "NO\n";
    



    return 0;
}