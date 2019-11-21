#include <bits/stdc++.h>
using namespace std;
int n,u,v,w;
vector< pair<int ,int> >adj[1200];
int visited[1200]={0},ans=0,sum=0;
int dfs(int x)
{
	int sz;
	sz=adj[x].size();
	for(int i=0;i<sz;i++)
	{
		if(!visited[adj[x][i].first])
		{
			visited[adj[x][i].first]=1;
			ans+=adj[x][i].second;

			dfs(adj[x][i].first);
		}
	}
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>u>>v>>w;
		adj[u].push_back(make_pair(v,0));
		adj[v].push_back(make_pair(u,w));
		sum+=w;
	}
	visited[1]=1;
	dfs(1);
	int fi=adj[1][1].first;
	if(adj[fi][0].first==1)
		ans+=adj[fi][0].second;
	else if(adj[fi][1].first==1)
		ans+=adj[fi][1].second;

	cout<<min(ans,sum-ans);




	return 0;
}





/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long ar[10];
	for (int i = 0; i < 4; i++)
	{
		cin>>ar[i];
	}
	sort(ar,ar+4);
	long long a1,a2,a3,a4,a,b,c;
	a1=ar[3];
	a2=ar[2];
	a3=ar[1];
	a4=ar[0];
	c=a1-a2;
	b=a4-c;
	a=a3-c;
	cout<<a<<" "<<b<<" "<<c;


	return 0;
}*/

/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,dif,si=0,ar[1000];
	cin>>n;
	set<int>s;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		s.insert(a);
	}
	set<int>::iterator it;
	for(it=s.begin();it!=s.end();it++)
	{
		ar[si]=*it;
		si++;
	}
	sort(ar,ar+si);
	if(si==1)
	{
		cout<<"0";
		return 0;
	}
	if(si==2)
	{
		int dif=abs(ar[1]-ar[0]);
		if(dif%2==0)
		{
			cout<<dif/2;
			return 0;
		}
		else
			cout<<dif;
		return 0;
	}
	if(si==3)
	{
		if((ar[2]-ar[1])==(ar[1]-ar[0]))
			cout<<ar[1]-ar[0];
		else
			cout<<"-1";
		return 0;
	}
	cout<<"-1";


	return 0;
}*/










/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,b,a,b1,a1,s=0;
	cin>>n>>b>>a;
	b1=b;
	a1=a;
	int ar[n];
	for(int i=0;i<n;i++)
		cin>>ar[i];
	for(int i=0;i<n;i++)
	{
		if(ar[i]==1)
		{
			if (b1)
			{
				if(a1<a)
				{
					s+=1;
					b1-=1;
					a1+=1;

				}
				else
				{
					s+=1;
					a1-=1;

				}
			}
			else if(a1)
			{
				s+=1;
				a1-=1;
			}
		}
		else
		{
			if(a1)
			{
				s+=1;
				a1-=1;

			}
			else if(b1)
			{
				s+=1;
				b1-=1;

			}
		}
	}
	cout<<s;



	return 0;
}*/
