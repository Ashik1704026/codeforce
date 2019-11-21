#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    cin>>t>>n;
    string str="";
    while(n!=0){
        int temp;
        temp=n%10;
        n/=10;
        if(temp==2) str+="2";
        else if(temp==3) str+="3";
        else if(temp==4) str+="322";
        else if(temp==5) str+="5";
        else if(temp==6) str+="35";
        else if(temp==7) str+="7";
        else if(temp==8) str+="2227";
        else if(temp==9) str+="3327";
    }
    sort(str.begin(),str.end(),greater<int>());
    cout<<str;


    return 0;
}