#include <bits/stdc++.h>
using namespace std;
list<int>adj[1200000];
int p[100000],n;
void permu()
{
	list<int>:: iterator it;
	for(int i=1;i<=n;i++)
	{
		for(it=adj[i].begin();it!=adj[i].end();it++)
		{
			if(p[*it]>p[i] && (*it < i))
			{
				int temp;
				temp=p[*it];
				p[*it]=p[i];
				p[i]=temp;
				permu();
			}
		}
	}
	return;
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>p[i];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		{
			char a;
			cin>>a;
			if(a=='1')
				adj[i].push_back(j);
				//adj[j].push_back(i);
		}

	permu();
	for(int i=1;i<=n;i++)
		cout<<p[i]<<" ";


	return 0;
}