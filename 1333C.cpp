#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long s = 0,p = 0,ans = 0;
    map<long long,long long> m;
    m[0] = 1;
    for(int i = 1;i <= n;i ++){
        long a;
        cin >> a;
        s += a;
        p = max(p,m[s]);
        ans += i - p;
        m[s] = i + 1;
    }
    cout << ans;
    return 0;
}