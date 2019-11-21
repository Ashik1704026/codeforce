#include <bits/stdc++.h>
using namespace std;
int n,m;
map<int,vector< pair<int,int> > >v;
long long dis[110000],node[110000];
#define inf 1e18

void path(int p)
{
    if(p!=1)
        path(node[p]);
    cout<<p<<" ";

}


void bfs()
{
    int visited[110000]={0};
    priority_queue< pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > >q;
    q.push(make_pair(0,1));
    for(int i=0;i<=n;i++)
    {
        dis[i]=inf;
        //node[i]=i;
    }
    dis[1]=0;
    while(!q.empty())
    {
        int k=q.top().second;
        visited[k]=1;
        q.pop();
        int sz=v[k].size();
        for(int i=0;i<sz;i++)
        {
           int x=v[k][i].first;
           int y=v[k][i].second;
           if(visited[x]==0 && dis[k]+y<dis[x])
           {
                dis[x]=dis[k]+y;
                node[x]=k;
                q.push(make_pair(dis[x],x));
           }
        }
    }
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b,w;
        cin>>a>>b>>w;
        v[a].push_back(make_pair(b,w));
        v[b].push_back(make_pair(a,w));
    }
    bfs();
    if(dis[n]==inf)
        cout<<"-1\n";
    else
        path(n);




    return 0;
}
