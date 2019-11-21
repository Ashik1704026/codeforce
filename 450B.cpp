#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int f,x,y;
    cin>>x>>y>>f;
    if(f%6==1) f=x;
    else if(f%6==2) f=y;
    else if(f%6==3) f=y-x;
    else if(f%6==4) f=(-1)*x;
    else if(f%6==5) f=-y;
    else if(f%6==0) f=x-y;
    long long ans= f%1000000007;
    if(ans<0) cout<<ans+1000000007;
    else cout <<ans;

}
