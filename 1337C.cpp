#include<bits/stdc++.h>
using namespace std;
const int MAXN = 200010;
 
int n, k, d[MAXN], sub[MAXN];
vector<int> graph[MAXN];

void dfs(int s,int des,int dep){
    sub[s] = 1;
    for(int i = 0;i < graph[s].size();i ++){
        int nex = graph[s][i];
        if(nex == des)
            continue;
        dfs(nex,s,dep + 1);
        sub[s] += sub[nex];
    }
    d[s] = dep - sub[s] + 1;
}



int main(){
    int n,k;
    cin >> n >> k;
    for(int i = 0;i < n - 1;i ++){
        int a,b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    dfs(1,1,0);
    sort(d+1,d+n+1,greater<int>());

    long long ans = 0;
    for(int i = 1;i <= k;i ++)
        ans += d[i];
    cout <<ans << "\n";

    return 0;
}