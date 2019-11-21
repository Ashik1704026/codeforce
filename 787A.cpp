#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    long rick[1000],morty[1000];
    for(int i=0;i<=100;i++){
        rick[i]=b+(i*a);
        morty[i]=d+(i*c);
    }
    // for(int i=0;i<=100;i++){
    //     cout<<rick[i]<<" "<<morty[i]<<"\n";
    // }
    int i;
    for(i=0;i<=100;i++){
        for(int j=0;j<=100;j++)
            if(rick[i]==morty[j]){
                cout<<rick[i];
                return 0;
            }
    }
    if(i==101) cout<<"-1";

    return 0;
}