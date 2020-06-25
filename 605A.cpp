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
    int n;
    cin >> n;
    int ar[n + 10];
    for(int i = 1;i <= n;i ++)
        cin >>  ar[i];
    int pos[n + 10];
    for(int i = 1;i <= n;i ++)
        pos[ar[i]] = i;
    int s = 1,mx = 0;
    for(int i = 2;i <= n; i++){
        if(pos[i] > pos[i - 1])
            s ++;
        else{
            mx = max(s,mx);
            s = 1;
        }
    }
    mx = max(s,mx);
    cout << n - mx;


    return 0;
}