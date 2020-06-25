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
        int n,k = 0;
        cin >> n;
        string str,st;
        cin >> str;
        st = str;
        sort(st.begin(),st.end());
        vector<int> v;
        for(int i = 0;i < n;i ++)
            if(str[i] == st[0])
                v.pb(i);
        string s[5000];
        for(int i = 0;i < 5000;i ++)
            s[i] = str;
        for(auto x : v){
            string tmp;
            if(x == n - 1){
                tmp = s[x];
                reverse(tmp.begin(),tmp.end());
                // cout << tmp << "end\n";
            }
            else{
                tmp = s[x];
                string sub = tmp.substr(x);
                // cout << sub << " ";
                string rvr = tmp.substr(0,x);
                if((n - x - 1) % 2)
                    tmp = sub + rvr;
                else{
                    reverse(rvr.begin(),rvr.end());
                    tmp = sub + rvr;
                }

                // cout << tmp << "\n";
            }
            if(str > tmp)
                str = tmp,k = x;
        }
        cout << str << "\n" << ++ k << "\n";
    }
    

    return 0;
}