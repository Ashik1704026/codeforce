#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,pos;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++) cin>>ar[i];
    int s=0;
    for(int i=1;i<n;i++)
        if(ar[i]<ar[i-1]) s++,pos=i;
    if(s==0) cout<<"0\n";
    else if(s==1 && ar[0]>=ar[n-1]) cout<<n-pos;
    else cout<<"-1\n";
}

