#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ar[100008];
	for(int i=1;i<=n;i++)
		cin>>ar[i];
	int cs[320][100008];
	for(int i=1;i<=sqrt(n);i++)
		for(int j=n;j>0;j--)
		{
			if(j+ar[j]+i>n)
				cs[i][j]=1;
			else
				cs[i][j]=cs[i][j+ar[j]+i]+1;
		}
	int q;
	cin>>q;
	while(q!=0)
	{
		int p,k;
		cin>>p>>k;
		if(k<=sqrt(n))
			cout<<cs[k][p]<<"\n";
		else
		{
			int cnt=0;
			while(p<=n)
			{
				p+=ar[p]+k;
				cnt++;
			}
			cout<<cnt<<"\n";
		}
		q--;
	}




	return 0;
}