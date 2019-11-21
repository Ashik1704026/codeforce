#include <bits/stdc++.h>
using namespace std;
int main()
{
    long  ni[110000],mi[110000],ki[110000],st[1100000];
    long n,m,k,x,y,as;
    long long ans=999999999999;
	cin>>n>>m>>k;
	for(long i=1;i<=m;i++)
	{
		cin>>ni[i]>>mi[i]>>ki[i];
	}
	for(long i=1;i<=k;i++)
	{
		long a;
		cin>>a;
		st[a]=1;
	}
	/*for(int i=1;i<=m;i++)
	{
		/*x=ni[i];
		y=mi[i];
		if(st[x]+st[y]==1)
		{
			if(ans>ki[i])
			{
				as=k[i];
				ans=as;
			}
		}
		cout<<st[i]<<" ";
	}*/
	//cout<<ans;


	return 0;
}
