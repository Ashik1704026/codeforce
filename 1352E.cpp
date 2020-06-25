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
        int ar[n];
        int br[9000] = {0};
        for(int i = 0;i < n;i ++){
            cin >> ar[i];
            br[ar[i]] ++;
        }
        for(int i = 1;i < n;i ++){
            ar[i] += ar[i - 1];
        }
        int cnt = 0;
        for(int i = 0;i < n;i ++){
            int x = 0;
            for(int j = i + 1;j < n;j ++){
                int y = ar[j] - x;
                if(y <= n){
                    if(br[y]){
                        cnt += br[y];
                        br[y] = 0;
                    }
                }
                x = ar[j - i - 1];
            }
        }
        cout << cnt << "\n";
    }


    


    return 0;
}