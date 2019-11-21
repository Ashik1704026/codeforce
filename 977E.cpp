#include <bits/stdc++.h>
using namespace std;
list<int>adj[12000000];
map<int,int>visited;
int j,ans=0;
bool dfs(int x,int parent)
{
	list<int>::iterator it;
	for(it=adj[x].begin();it!=adj[x].end();it++)
	{
		if(!visited[*it] && adj[*it].size()==2)
		{
			visited[*it]=1;
			int f_dfs=dfs(*it,x);
			if(f_dfs==true)
				return true;
		}
		else if(*it!=parent && adj[*it].size()==2)
			return true;
	}
	return false;
}
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	for(j=1;j<=n;j++)
	{
		if(!visited[j] && adj[j].size()==2)
		{
			visited[j]=1;
			int m_dfs=dfs(j,-1);
			if(m_dfs==true)
				ans+=1;
		}
	}
	cout<<ans;

	return 0;
}