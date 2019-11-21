#include <bits/stdc++.h>
using namespace std;
long long n,s;
list<int >adj[1200000];
map<int,int>visited;
void dfs(int x)
{
	list<int>::iterator it;
	for(it=adj[x].begin();it!=adj[x].end();it++)
	{
		if(!visited[*it])
		{
			s++;
			visited[*it]=1;
			dfs(*it);
		}
	}
}
int main()
{
	long long  sum=0,sz;
	cin>>n;
	for(int i=0;i<n-1;i++)
	{
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	sz=adj[1].size();
	visited[1]=1;
	list<int>::iterator it;
	for(it=adj[1].begin();it!=adj[1].end();it++)
	{
		if(!visited[*it])
		{
			visited[*it]=1;
			s=1;
			dfs(*it);
			sum+=s;
		}
	}
	printf("%.10lf\n",sum/(sz*1.0));
	//cout<<sum;



	return 0;
}