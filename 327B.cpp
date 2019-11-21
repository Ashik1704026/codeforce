#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,cnt=0;
    cin>>n;
    bool prime[2000000];
    memset(prime,true,sizeof(prime));
    for(long p=2;p*p<=2000000;p++){
        if(prime[p]==true){
            for(long i=p*p;i<=2000000;i+=p)
                prime[i]=false;
        }
    }
    int i=2;
    while (cnt!=n)
    {
        if(prime[i]==true){
            cout<<i<<" ";
            cnt++;
        }
        i++;
    }
    

}