#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long t,cnt=0,m=0,mx=0;
    cin>>n>>t;
    int ar[n+10];
    ar[0]=0;
    cin>>ar[1];
    for(int i=2;i<=n;i++){
        cin>>ar[i];
        ar[i]+=ar[i-1];
    }
    for(int i=1;i<=n;i++){
        if(ar[i]-ar[m]>t) m++;
        mx=max(mx,(i-m));
    }
    cout<<mx;
    return 0;
}