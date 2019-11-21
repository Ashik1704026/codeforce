#include <bits/stdc++.h>
using namespace std;
int n,m,ans;
list<pair<int,int> >adj[12000];
int visited[12000]={0};
int s,d,j;
int dfs(int x)
{
	if(visited[d]==1)
		return 0;
	visited[x]++;


	list<pair<int,int> >::iterator it;
	for(it=adj[x].begin();it!=adj[x].end();it++)
	{
		if(!visited[it->first] && it->second==j)
		{
			dfs(it->first);
		}
	}
}
int main()
{
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int u,v,ci;
		cin>>u>>v>>ci;
		adj[u].push_back(make_pair(v,ci));
		adj[v].push_back(make_pair(u,ci));
	}
	int q;
	cin>>q;
	while(q--)
	{
		cin>>s>>d;
		for(j=1;j<=m;j++)
		{
			dfs(s);
			if(visited[d]==1)
				ans++;
			memset(visited,0,sizeof(visited));
		}
		cout<<ans<<"\n";
		ans=0;
	}


	return 0;
}






/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	int a=0;
	int sz;
	sz=str.size();
	for(int i=0;i<sz;i++)
	{
		if(str[i]=='a')
			a+=1;
	}
	if(a>sz/2)
		cout<<sz;
	else
		cout<<(a*2)-1;


	return 0;
}*/




/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str,str1,str2;
	cin>>str;
	int sz;
	str1=str;
	str2=str;
	sz=str.size();
	int yz;
	yz=sz;
	for(int i=0;i<sz;i++)
	{
		if(str[i]=='a')
		{
			str.erase(str.begin()+i);
			sz--;
			i--;
		}
	}
	if(str1[yz-1]=='a' && str.size()!=0)
	{
		cout<<":(";
		return 0;
	}
	int sz1,x,y;
	sz1=str.size();
	if(sz1%2)
	{
		cout<<":(";
		return 0;
	}
	x=sz1/2;
	y=x;
	for(int i=0;i<x;i++,y++)
	{
		if(str[i]!=str[y])
		{
			cout<<":(";
			return 0;
		}
	}
	int ss=str1.size();
	int indx;
	for(int i=0;i<ss;i++)
	{
		if(str1[i]=='a')
			indx=i;
	}

	for(int i=0;i<ss-x;i++)
		cout<<str1[i];


	return 0;
}
*/




/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str,str1;
	cin>>str;
	str1=str;
	int indx1,indx2,indx3;
	for(int i=0;i<str.size();i++)
		if(str[i]=='a')
			indx1=i;
	int lft=0,rght=0;
	for(int i=0;i<indx1;i++)
		if(str[i]!='a')
			lft+=1;
	rght=str.size()-indx1;
	if(lft>rght)
	{
		cout<<":(";
		return 0;
	}
	int sz=str.size();
	for(int i=0;i<sz;i++)
	{
		if(str[i]=='a')
		{
			str.erase(str.begin()+i);
			sz--;
			i--;
		}
	}
	sz=str.size();
	if(sz%2)
	{
		cout<<":(";
		return 0;
	}
	int x,y;
	x=sz/2;
	y=x;
	for(int i=0;i<x;i++)
	{
		if(str[i]!=str[y])
		{
			cout<<":(";
			return 0;
		}
		y++;
	}
	for(int i=0;i<(str1.size()-x);i++)
		cout<<str1[i];

	

	return 0;
}
*/