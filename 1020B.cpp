#include <bits/stdc++.h>
using namespace std;
vector<int>v[1100];
int bfs(int a)
{
	int x,visited[11000]={0};
	visited[a]=1;
	queue<int>q;
	q.push(a);
	while(!q.empty())
	{
		int k=q.front();
		q.pop();
		x=v[k][0];
		if(visited[x]==0)
		{
			q.push(x);
			visited[x]=1;
		}
	}
	return x;
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int a;
		cin>>a;
		v[i].push_back(a);
	}
	for(int i=1;i<=n;i++)
		cout<<bfs(i)<<" ";


	return 0;
}