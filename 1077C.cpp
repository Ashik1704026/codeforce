#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long ar[n],br[n],sol[n];
    long long s=0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        s+=ar[i];
        br[i]=ar[i];
    }
    sort(br,br+n);
    int ans=0;
    for(int i=0;i<n;i++){
        long t=(ar[i]==br[n-1]?n-2:n-1);
        if(s-ar[i]==2*br[t]) sol[ans++]=i;
    }
    cout<<ans<<"\n";
    for(int i=0;i<ans;i++) cout<<sol[i]+1<<" ";

    return 0;
}