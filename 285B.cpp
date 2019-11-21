#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s,t;
    cin>>n>>s>>t;
    int ar[n+10],st=s;
    for(int i=1;i<=n;i++) cin>>ar[i];
    int cnt=1;
    for(int i=0;i<=n;i++){
        if(s==t){
            cout<<i;
            return 0;
        }
        s=ar[s];
    }
    cout<<"-1";
    return 0;
}