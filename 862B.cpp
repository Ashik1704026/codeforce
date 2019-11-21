#include <bits/stdc++.h>
using namespace std;
int n;
list<int>adj[12000000];
vector<int>red,green;
map<int,int>color,visited;
long long cnt[2]={0};
bool dfs(int x)
{
	cnt[color[x]]++;
	list<int>::iterator it;
	for(it=adj[x].begin();it!=adj[x].end();it++)
	{
		if(!(visited[*it]))
		{
			color[*it]=1-color[x];
			visited[*it]=1;
			bool dfss=dfs(*it);
			if(dfss==0)
				return false;
		}
		else if(color[x]==color[*it])
			return false;
	}
	return true;

}
int main()
{
	cin>>n;
	int u,v;
	for(int i=0;i<n-1;i++)
	{
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	visited[u]=1;
	color[u]=1;
	bool ans=dfs(u);
	if(ans)
		cout<<(cnt[0]*1LL*cnt[1])-n+1;



	return 0;
}