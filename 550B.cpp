#include<bits/stdc++.h>
using namespace std;
int main(){
    long n,l,r,x;
    cin>>n>>l>>r>>x;
    long ar[n];
    for(int i = 0;i < n;i ++) cin >> ar[i];
    long sum=0,mi=1e9+7,mx=0,ans=0;
    for(int i = (1<<n);i > 0;i --){
        sum=0,mi=1e9+7,mx=0;
        for(int j = 0;j < n;j ++){
            if(i & (1 << j)){
                sum += ar[j];
                mi=min(mi,ar[j]);
                mx=max(ar[j],mx);
            }
        }
        ans += (sum >= l && sum <= r) && ((mx - mi) >= x);
    }
    cout<<ans;


    return 0;
}