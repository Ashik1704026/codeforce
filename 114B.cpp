#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    string str[n];
    for(int i = 0;i < n;i ++)
        cin >> str[i];
    pair<string,string> x[m];
    for(int i = 0;i < m;i ++){
        cin >> x[i].first;
        cin >> x[i].second;
    }
    set<string>pr,ans;
    int i,j;
    for(i = 0;i <= (1 << n);i ++){
        for(int j = 0;j < n;j ++){
            if(i & (1 << j)) pr.insert(str[j]);
        }
        for(j = 0;j < m;j ++){
            if(pr.count(x[j].first) && pr.count(x[j].second))
                break;
        }
        if(pr.size() > ans.size() && j == m)
            ans = pr;
        pr.clear();
    }
    cout << ans.size() << "\n";
    for(auto a : ans)
        cout << a << "\n";

    return 0;
}