#include<bits/stdc++.h>
using namespace std;

long long sol(long long x,long long a,long long b){
    long long lcm=(a*b)/(__gcd(a,b));
    if(x<=b-1)return x;
    long long p=x/lcm;
    long long  ret=p*(b);
    ret--;
    long long lft=p*lcm;
    long long rgt=lft+b-1;
    rgt=min(rgt,x);
    ret+=(rgt-lft+1);
    return ret;  
}

int main(){
    int t;
    cin >> t;
    while(t --){
        long long a,b,q;
        cin >> a >> b >> q;
        if(a > b)
            swap(a,b);
        while(q --){
            long long l,r;
            cin >> l >> r;
            long long ans = sol(r,a,b) - sol(l - 1,a,b);
            // cout << sol(r,a,b) << " " << sol(l - 1,a,b) << " ";
            ans = (r - l + 1) - ans;
            cout << ans << " ";
        }
        cout << "\n";
    }

    return 0;
}