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
        int a,b,c;
        cin >> a >> b >> c;
        string str = "";
        if(!b){
            if(a)
                for(int i = 0;i <= a;i ++)
                    cout << "0";
            else
                for(int i = 0;i <= c;i ++)
                    cout << "1";
            cout << "\n";
        }
        else{
            if(b & 1) str += "0",b --;
            while(b >= 2)
                str += "10",b -= 2;
            for(int i = 0;i < a;i ++)
                str += '0';
            for(int i = 0;i <= c;i ++)
                str += '1';
            cout << str << "\n";
        }
    }


    


    return 0;
}