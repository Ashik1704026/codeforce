#include<bits/stdc++.h>
using namespace std;
int main(){
    int ar[4];
    for(int i=0;i<4;i++) cin>>ar[i];
    sort(ar,ar+4);
    for(int i=0;i<2;i++){
        if(ar[i]+ar[i+1]>ar[i+2]){
            cout<<"TRIANGLE\n";
            return 0;
        }
    }
    for(int i=0;i<2;i++){
        if(ar[i]+ar[i+1]==ar[i+2]){
            cout<<"SEGMENT\n";
            return 0;
        }
    }
    cout<<"IMPOSSIBLE\n";
    return 0;
}