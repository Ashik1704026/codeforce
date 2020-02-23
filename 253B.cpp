#include<bits/stdc++.h>
using namespace std;
int sum[100000],ar[100000];
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,ans=99999;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ar[i]=x;
        sum[x]++;
    }
    for(int i=1;i<=5000;i++) sum[i]+=sum[i-1];
    int i=0,j=5000;
    for(int i=0;i<n;i++){
        int x=ar[i];
        int x2=ar[i]*2;
        (x2>=5000)?x2=5000:x2=x2;
        int prv=sum[x-1],nxt=sum[5000]-sum[x2];
        ans=min(ans,prv+nxt);
    }
    cout<<ans;

    return 0;
}