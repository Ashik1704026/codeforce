#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n,nn,tt,t=0,m,sum=0,nm=0,d=1;
	cin>>n;
	nn=n;
	string cnt;
	cnt=to_string(n);
	t=cnt.size();
	if(t==1)
	{
		cout<<nn;
		return 0;
	}
	tt=t;
	while(t!=1)
	{
		nm+=9*d;
		d*=10;
		t-=1;
	}
	m=nn-nm;
	while(m!=0)
	{
		sum+=(m%10);
		m/=10;
	}
	sum=sum+(9*(tt-1));
	cout<<sum;

	return 0;
}