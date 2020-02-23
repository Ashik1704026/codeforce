#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=0;
    cin>>n;
    int ar[100200]={0};
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        ar[a]++;
        ar[a+1]++;
        ar[a-1]=0;
        ar[a+2]=0;
        ans=max(ans,max(ar[a],ar[a+1]));
    }
    cout<<ans;

    return 0;
}