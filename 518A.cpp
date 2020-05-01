#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define memset(x) memset(x, 0, sizeof(x))
#define lcm(a,b) a*b/__gcd(a,b)
#define mp make_pair
#define pb push_back

int main(){
    string s,t;
    cin >> s >> t;
    int ar[200];
    memset(ar);
    int f = s.size() - 1;
    for(int i = f;i >= 0;i --){
        if(s[i] == 'z'){
            s[i] = 'a';
        }
        else{
            s[i] ++;
            break;
        }
    }
    // if(s[f] == 'z')
    //     s[f] = 'a';
    // else
    //     s[f] ++;
    if(s >= t)
        cout << "No such string\n";
    else
        cout << s;
    return 0;
}