#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define memset(x) memset(x, 0, sizeof(x))
#define lcm(a,b) a*b/__gcd(a,b)
#define mp make_pair
#define pb push_back

int ar[5555555];
int main(){
    fast;
    int t;
    cin >> t;
    map<int,int> m;
    for(int i = 2;i <= 5000000;i ++){
        if(!ar[i]){
            for(int j = 1;j * i <= 5000000;j ++){
                for(int k = i * j;k % i == 0;k /= i)
                    ar[i * j] ++;
            }
        }
        ar[i] += ar[i - 1];
    }
    while(t --){
        int a,b;
        cin >> a >> b;
        cout << ar[a] - ar[b] << endl;
    }
    return 0;
}