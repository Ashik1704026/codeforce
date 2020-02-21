#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    vector<int>rght,lft;
    for(int i=0;i<str.size();i++){
        if(str[i]=='l') lft.push_back(i+1);
        else rght.push_back(i+1);
    }
    for(int i=0;i<rght.size();i++) cout<<rght[i]<<"\n";
    for(int i=lft.size()-1;i>=0;i--) cout<<lft[i]<<"\n";

    return 0;
}