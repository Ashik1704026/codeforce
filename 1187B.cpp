#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    vector<int>pos[30];
    for(int i=0;i<n;i++)
        pos[str[i]-'a'].push_back(i+1);
    int m;
    cin>>m;
    while(m--){
        int mx=0,cnt[30]={0};
        string name;
        cin>>name;
        for(int i=0;i<name.size();i++) cnt[name[i]-'a']++;
        for(int i=0;i<name.size();i++){
            mx=max(mx,pos[name[i]-'a'][cnt[name[i]-'a']-1]);
        }
        cout<<mx;
    }

    return 0;
}