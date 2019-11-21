#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==1 || n==0)
        return 1;
    return n*fact(n-1);
}

int main(){
    int ar[50];
    string origin,recieved;
    int s1=0,s2=0,n=0,total=0,sum=0;
    cin>>origin>>recieved;
    for(int i=0;i<origin.size();i++){
        if(origin[i]=='+') s1+=1;
        else s1-=1;
    }
    for(int i=0;i<recieved.size();i++){
        if(recieved[i]=='+') s2+=1;
        else if(recieved[i]=='-') s2-=1;
        else n+=1;
    }
    for(int i=0;i<=n;i++){
        ar[i]=fact(n)/(fact(i)*fact(n-i));
        total+=ar[i];
    }
    int k=n,j=0;
    for(int i=0;i<=n;i++,j+=2){
        if(s2+(n-j)==s1){
            sum+=ar[i];
        }
    }
    printf("%.10lf",(sum*1.0)/(total*1.0));
}