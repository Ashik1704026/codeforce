#include<bits/stdc++.h>
using namespace std;
int x,y,z,ans=200000;
int main(){
    string str;
    cin>>str;
    for(char a='a';a<='z';a++){
        for(int i=0;i<=str.size();i++){
            x=max(x,++y);
            (str[i]==a)?y=0:0;
        }
        ans=min(ans,x);
        y=0,x=0;
    }
    cout<<ans;

    return 0;
}
