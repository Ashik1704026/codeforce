#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    string dp[10000];
    for(int i=0,j=0;i<=124;i++,j++){
        dp[j]=to_string(i*8);
    }
    int k=0,flag=0;
    for(int j=0;j<125;j++){
        for(int i=0;i<str.size();i++){
            if(dp[j][k]==str[i]) k++;
            if(k==dp[j].size()){
                cout<<"YES\n"<<dp[j];
                return 0;
            }
            //cout<<dp[j][k]<<" "<<str[i]<<" a";
        }
        k=0;
    }

    cout<<"NO\n";


    return 0;
}