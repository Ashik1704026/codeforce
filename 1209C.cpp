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
        string str,s,sol = "";
        cin >> str;
        s = str;
        int ar[n + 10] = {0};
        int t = 0;
        sort(str.begin(),str.end());
        for(int i = 0;i < n;i ++){
            if(s[i] == str[t])
                ar[i] = 1,t ++;
        }
        for(int i = 0;i < n;i ++)
            if(ar[i] == 1)
                sol += s[i];
        for(int i = 0;i < n;i ++)
            if(ar[i] == 0)
                sol += s[i];
        t = 1;
        for(int i = 1;i < n;i ++){
            if(sol[i] < sol[i - 1])
                t = 0;
        }
        if(!t)
            cout << "-";
        else
            for(int i = 0;i < n;i ++)
                if(ar[i])
                    cout << ar[i];
                else
                    cout << "2";
        cout << "\n";
    }


    return 0;
}