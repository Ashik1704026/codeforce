#include <bits/stdc++.h>
using namespace std;
int main()
{
	long n,m,mo,ans=0;
	cin>>n>>m;
	if(m%n!=0)
	{
		cout<<"-1";
		return 0;
	}
	mo=m/n;
	m=mo;
	while(m%3==0)
	{
		m/=3;
		ans++;
	}
	while(m%2==0)
	{
		m/=2;
		ans++;
	}
	(m==1)?(cout<<ans):(cout<<"-1");



	return 0;
}