#include <bits/stdc++.h>
using namespace std;
list<int>adj[1200000];
int visited[1200000],color[1200000];
int cnt[2]={0};
int n,m,u,v;

void dfs(int x)
{
	cnt[color[x]]++;
	list<int>::iterator it;
	for(it=adj[x].begin();it!=adj[x].end();it++)
	{
		if(!visited[*it])
		{
			visited[*it]=1;
			color[*it]=1-color[x];
			dfs(*it);
		}
		else if(color[*it]==color[x])
			{
				cout<<"-1\n";
				exit(0);
			}
	}
}

int main()
{
	cin>>n>>m;
	for(int i=0;i<=n;i++)
	{
		color[i]=-1;
		visited[i]=0;
	}
//	cout<<color[4];
	for(int i=0;i<m;i++)
	{
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	color[u]=1;
	visited[u]=1;
	dfs(u);

		cout<<cnt[1]<<"\n";
		for(int i=1;i<=n;i++)
			if(color[i]==1)
				cout<<i<<" ";
		cout<<"\n";
		cout<<cnt[0]<<"\n";
		for (int i=1;i<=n;i++)
			if(color[i]==0)
				cout<<i<<" ";



	return 0;
}