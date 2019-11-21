#include <bits/stdc++.h>
using namespace std;
int n,m;
list<int > adj[12000000];
map<int,int>visited;
long long cnt_vertices,cnt_edges;
void dfs(int x)
{
	list<int>::iterator it;
	cnt_edges+=adj[x].size();
	for(it=adj[x].begin();it!=adj[x].end();it++)
	{
		if(!visited[*it])
		{
			visited[*it]=1;
			cnt_vertices+=1;
			dfs(*it);
		}
	}

}
int main()
{
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	for(int i=1;i<=n;i++)
	{
		if(!visited[i])
		{
			visited[i]=1;
			cnt_vertices=1;
			cnt_edges=0;
			dfs(i);
			cnt_edges/=2;
			//cout<<i<<"  "<<cnt_vertices<<"  "<<cnt_edges<<"\n";
			if(cnt_edges!=(long long)(cnt_vertices*(cnt_vertices-1))/2.0)
			{
				cout<<"NO\n";
				return 0;
			}
		}
	}
	cout<<"YES\n";




	return 0;
}