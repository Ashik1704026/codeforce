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
        string str;
        cin >> str;
        reverse(str.begin(),str.end());
        int sz = str.size();
        int cnt = 0;
        vector<char> v;
        for(int i = 0;i < str.size();i ++){
            if(str[i] != '0'){
                cnt ++;
                for(int j = 0;j < i;j ++)
                    v.push_back('0');
                v.push_back(str[i]);
                v.pb(' ');
            }
        }
        cout << cnt << "\n";
        for(int i = v.size() - 2;i >= 0;i --)
            cout << v[i];
        cout << "\n";
    }


    


    return 0;
}

