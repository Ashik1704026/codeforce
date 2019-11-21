#include<bits/stdc++.h>
using namespace std;
list<int>adj[120000];
int n,ans=0;
std::map<int, int> visited;
void dfs(int x)
{
	list<int>::iterator it;
	for(it=adj[x].begin();it!=adj[x].end();it++)
	{
		if(!visited[*it])
		{
			//cout<<x<<"  "<<*it<<"\n";
			visited[*it]=1;
			ans++;
			dfs(*it);
		}
	}
}


int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		if(x!=i)
		{
			adj[i].push_back(x);
			adj[x].push_back(i);
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(!visited[i])
		{
			visited[i]=1;
			dfs(i);
		}
	}
	cout<<n-ans;
	/*for(int i=1;i<=n;i++)
	{
		ans+=adj[i].size();
	}
	ans/=2;
	cout<<n-ans;*/

	return 0;
}