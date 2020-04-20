#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string> v;
    map<string,int> mp1,mp2;
    for(int i = 0;i < n;i ++){
        string str;
        cin >>str;
        v.push_back(str);
        mp1[v[i]] ++;
        mp2[v[i]] ++;
    }
    for(int i = n - 1;i >= 0;i --){
        if(mp1[v[i]] == mp2[v[i]]){
            cout << v[i] << "\n";
            mp2[v[i]] --;
        }
    }



    return 0;
}