#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++) cin>>ar[i];
    if(n==1){
        cout<<"1 0";
        return 0;
    }
    int x=0,y=n-1,t1=ar[0],t2=ar[n-1],ans1=1,ans2=1;
    while((n--)>2){
        if(t1==t2 && x==y){
            ans1++;
            t1+=ar[++x];
        }
        else{
            if(t1<=t2){
                ans1++;
                t1+=ar[++x];
            }
            else{
                ans2++;
                t2+=ar[--y];
            }
        }
    }
    cout<<ans1<<" "<<ans2;


    return 0;
}