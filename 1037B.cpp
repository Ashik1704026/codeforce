#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long s,ans=0;
    cin>>n>>s;
    long ar[n];
    for(int i=0;i<n;i++) cin>>ar[i];
    sort(ar,ar+n);
    long mdian=n/2;
    for(int i=0;i<=mdian;i++)
        if(ar[i]>s) ans+=ar[i]-s;
    for(int i=mdian;i<n;i++)
        if(ar[i]<s) ans+=s-ar[i];
    cout<<ans;

    return 0;
}