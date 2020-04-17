#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t --){
        int n;
        scanf("%d",&n);
        long long ar[n],br[n];
        for(int i = 0;i < n;i ++)
            scanf("%lld%lld",&ar[i],&br[i]);
        long long ans = 0,mn = 9e13;
        for(int i = 0;i < n;i ++){
            long long ni = (i+1) % n;
            long long val = min(ar[ni],br[i]);
            ans += ar[ni] - val;
            mn = min(mn,val);
        }
        ans += mn;
        printf("%lld\n",ans);
    }



    return 0;
}