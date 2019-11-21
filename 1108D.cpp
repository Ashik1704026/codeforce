#include <bits/stdc++.h>
using namespace std;
int n,m,p,ans[100000]={0};
long int speed[10];
queue< pair<int,int> >frnd[15];
char gird[10000][10000];
int X[]={0,-1,0,1};
int Y[]={-1,0,1,0};
#define boundary(a,b)((a>0&&a<=n)&&(b>0&&b<=m))
void bfs(int m)
{
	while(!frnd[m].empty())
	{
		int s=frnd[m].front().first;
		int t=frnd[m].front().second;
		frnd[m].pop();
		for(int k=0;k<4;k++)
		{
			int dx=X[k]+s;
			int dy=Y[k]+t;
			if((gird[dx][dy])=='.'&& (boundary(dx,dy)))
			{
				ans[m]+=1;
				gird[dx][dy]='#';
				frnd[m].push(make_pair(dx,dy));
			}
		}
	}
}
int main()
{
	cin>>n>>m>>p;
	for(int i=1;i<=p;i++)
		cin>>speed[i];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>gird[i][j];
			if(gird[i][j]!='.'&&gird[i][j]!='#')
			{
				frnd[gird[i][j]-'0'].push(make_pair(i,j));
				ans[gird[i][j]-'0']+=1;
			}
		}

	}
	while(1)
	{
		for(int i=1;i<=p;i++)
		{
			bfs(i);
		}
	}
	/*for(int i=1;i<=p;i++)
	{
		while(!frnd[i].empty())
		{
			cout<<frnd[i].front().first<<"   "<<frnd[i].front().second<<endl;
			frnd[i].pop();
		}
		cout<<endl;
	}*/
	for(int i=1;i<=p;i++)
		cout<<ans[i]<<" ";


	return 0;
}
