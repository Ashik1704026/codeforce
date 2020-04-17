#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    pair<int,int> l[n],s[n];
    for(int i = 0;i < m;i ++){
        cin >> l[i].first;
        l[i].second = i;
    }
    sort(l,l+m);
    int p = 0,x = n;
    for(int i = m - 1;i >= 0;i --){
        p = x + 1 - l[i].first;
        if(p > 0){
            s[i].first = l[i].second;
            s[i].second = p;
            x = p - 1;
        }
        else{
            s[i].first = l[i].second;
            s[i].second = 1;
            x = 1;
            p = 1;
        }
    }
    if(p != 1)
        cout << "-1\n";
    else{
        sort(s,s+m);
        for(int i = 0;i < m;i ++)
            cout << s[i].second << " ";
    }
    return 0;
}