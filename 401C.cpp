#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    if(n>m+1 || m>(2*n)+2){
        cout<<"-1";
        return 0;
    }
    int flag=0;
    if(n>=m) flag=1;
    while(n!=0 || m!=0){
        if(flag){ cout<<"0",n--;flag=0;}
        else if(m>n+1 && flag==0){ cout<<"11",m-=2;flag=1;}
        else if(m>=n && flag==0){cout<<"1",m--;flag=1;} 
    }


    return 0;
}