#include <bits/stdc++.h>
using namespace std;
list<int>adj[12000000];
map<int,int>visited;
const int mod = 1e9 + 7;
int t=0;
void dfs(int x)
{
	if(visited[x])
		return;
	list<int>::iterator it;
	t++;
	visited[x]=1;
	for(it=adj[x].begin();it!=adj[x].end();it++)
	{
			dfs(*it);
	}
}
long long powww(long long a, long long b)
{
	long long ans=1;
	while(b)
	{
		if(b&1)
		{
			ans=(ans*a)%mod;
		}
		b/=2;
		a=(a*a)%mod;
	}
	return ans;
}
int main()
{
	long long ans=0,ans1=0;
	int n,k;
	cin>>n>>k;
	ans=powww(n,k);
	for(int i=0;i<n-1;i++)
	{
		int u,v,w;
		cin>>u>>v>>w;
		if(w==0)
		{
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(visited[i])
			continue;
			t=0;
			dfs(i);
			ans-=powww(t,k);
			ans+=1000000007;
			ans%=1000000007;
		
	}
	cout<<ans;



	return 0;
}