#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    while(q--){
        long n,m,flag=0;
        cin>>n>>m;
        long t[n],l[n],r[n];
        for(int i=0;i<n;i++){
            cin>>t[i]>>l[i]>>r[i];
        }
        long k=0,k1=0,mn=m,mx=m;
        for(int i=0;i<n;i++){
            k=t[i]-k1;
            mn=mn-k;
            mx=mx+k;
            if(mn>r[i] || mx<l[i]){
                flag=1;
                break;
            }
            mn=max(mn,l[i]);
            mx=min(mx,r[i]);
            k1=t[i];
        }
        if(flag==1) cout<<"NO\n";
        else cout<<"YES\n";
    }


    return 0;
}