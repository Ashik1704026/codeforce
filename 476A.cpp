#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,d,dm,t;
	cin>>n>>m;
	d=n/2;
	if(d%m==0 && d*2==n)
	{
		cout<<d;
		return 0;
	}
	else
	{
		dm=d%m;
		dm=m-dm;
		d=d+dm;
		if(d>n)
			cout<<"-1";
		else
			cout<<d;
	}
	return 0;
}