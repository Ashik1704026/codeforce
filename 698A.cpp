#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int prev,nw=-1,cnt=0;
    for(int i=0;i<n;i++){
        prev=nw;
        cin>>nw;
        if(prev==nw && nw!=3) nw=0;
        if(prev!=nw && nw==3) nw-=prev;
        if(nw==0) cnt++;
    } 
    cout<<cnt;
    return 0;
}