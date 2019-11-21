#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int>adj[1200000];
vector<int>path;
map<int,int>visited;
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
	priority_queue<int,vector<int> ,greater<int> >q;	
	q.push(1);
	visited[1]=1;
	while(!q.empty())
	{
		int k=q.top();
		path.push_back(k);
		q.pop();
		for(int i=0;i<adj[k].size();i++)
		{
			if(!visited[adj[k][i]])
			{
				visited[adj[k][i]]=1;
				q.push(adj[k][i]);
			}
		}
	}

	for(int i=0;i<n;i++)
	{
		 cout<<path[i]<<" ";
	}



	return 0;
}