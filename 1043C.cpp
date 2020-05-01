#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    int mx = 0,f = 0,loc = -1;
    int sol[100000] = {0};
    int prev = 0;
    vector<int> v;
    for(int i = 0;i < str.size();i ++){
        if(str[i] == 'a')
            v.push_back(i);
    }
    if(v.size() == 0){
        for(int i = 0;i < str.size();i ++)
            cout << "0 ";
        return 0;
    }
    // for(int i = 0;i <v.size();i ++)
    //     cout << v[i] << " ";
    for(int i = 1;i < v.size();i ++){
        if(v[i] - v[i - 1] > 1){
            sol[v[i - 1]] = 1;
            sol[v[i] - 1] = 1;
        }
    }
    int x = v[v.size() - 1];
    sol[x] = 1;
    for(int i = 0;i < str.size();i ++)
        cout << sol[i] << " ";


    return 0;
}