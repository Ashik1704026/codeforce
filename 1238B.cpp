#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    while(q--){
        int n,r,ans=0;
        long s=0;
        cin>>n>>r;
        int ar[200000];
        for(int i=0;i<n;i++) cin>>ar[i];
        sort(ar,ar+n,greater<int>());
        n = unique(ar, ar + n) - ar;
        for(int i=0;i<n;i++){
            if(ar[i]-s>0){
                ans++;
                ar[i]=0;
                s+=r;
            }
        }
        cout<<ans<<"\n";
    }
}