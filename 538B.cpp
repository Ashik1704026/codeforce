#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m,t=1,sum[25]={0},ans=0;
    while(n){
        m=n%10;
        for(int i=9;i>(9-m);i--) sum[i]+=t;
        n/=10;
        t*=10;
        if(m>ans) ans=m;
    }
    cout<<ans<<"\n";
    for(int i=0;i<=9;i++)
        if(sum[i]) cout<<sum[i]<<" ";


    return 0;
}