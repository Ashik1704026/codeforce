#include<bits/stdc++.h>
using namespace std;
const long INF = 1e9;
vector<int> g[300000];

void bfs(int s,vector<long> &d){
    d[s] = 0;
    queue<int> q;
    q.push(s);
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(auto to : g[v]){
            if(d[to] == INF){
                d[to] = d[v] + 1;
                q.push(to);
            }
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t --){
        int n,m,a,b,c;
        cin >> n >> m >> a >> b >> c;
        long p[m];
        for(int i = 0;i < m;i ++)
            cin >> p[i];
        for(int i = 0;i < m;i ++){
            int a,b;
            cin >> a >> b;
            g[a].push_back(b);
            g[b].push_back(a);
        }
        sort(p,p + m);
        vector<long long> pref(m+10);
        long long sum = 0;
        for(int i = 0;i < m;i ++){
            sum += p[i];
            pref[i + 1] += sum;
        }
        vector<long> da(n + 10,INF),db(n + 10,INF),dc(n + 10,INF);
        bfs(a,da);
        bfs(b,db);
        bfs(c,dc);
        long long ans = 1e18;
        for(int i = 1;i <= n;i ++){
            if(da[i] + db[i] + dc[i] > m) continue;
            long s = da[i] + db[i] + dc[i];
            ans = min(ans,pref[db[i]] + pref[da[i]+db[i]+dc[i]]);
        }
        cout << ans << "\n";

    }
    return 0;
}