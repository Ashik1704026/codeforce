#include <bits/stdc++.h>
using namespace std;
long long n,m;
map<long long ,long long>gold,visited;
list<long long>frnd[12000000];
long long ans=0,mn,ans1;
long long dfs(long long x)
{
	list<long long>::iterator it;
	for(it=frnd[x].begin();it!=frnd[x].end();it++)
	{
		if(!visited[*it])
		{
			visited[*it]=1;
			dfs(*it);
		}
	}
	mn=min(mn,gold[x]);
	return mn;
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>gold[i];
	for(int i=0;i<m;i++)
	{
		long long u,v;
		cin>>u>>v;
		frnd[u].push_back(v);
		frnd[v].push_back(u);
	}
	for(int i=1;i<=n;i++)
	{
		if(!visited[i])
		{
			//cout<<visited[i]<<" ";
			visited[i]=1;
			mn=999999999999999;
			ans1=dfs(i);
			ans+=mn;
		}
	}
	cout<<ans;


	return 0;
}