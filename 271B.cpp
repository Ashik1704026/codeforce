#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	long long mn=99999999999999999,s=0;
	cin>>n>>m;
	int prim[110000]={0};
	prim[1]=1;
	prim[2]=0;
	prim[3]=0;
	prim[100001]=1;
	prim[100002]=1;
	prim[100003]=0;
	for(int i=4;i<=100000;i++)
	{
		if(i%2==0)
			prim[i]=1;
		else
		{
			for(int j=3;j<=sqrt(i);j+=2)
				if(i%j==0)
				{
					prim[i]=1;
					break;
				}
		}
	}
	//for(int i=1;i<=10;i++)
	//	cout<<prim[i]<<" ";
	//cout<<endl;
	int mat[n][m];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>mat[i][j];

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(prim[mat[i][j]]==1)
			{
				int x=mat[i][j];
				while(prim[x+1]==1)
					x++;
				s+=x+1-mat[i][j];
				//cout<<s<<endl;
			}
		}
		mn=min(mn,s);
		s=0;
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(prim[mat[j][i]]==1)
			{
				int x=mat[j][i];
				while(prim[x+1]==1)
					x++;;
				s+=x+1-mat[j][i];
			}
		}
		mn=min(mn,s);
		s=0;
	}
	cout<<mn;



	return 0;
}