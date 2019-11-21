#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,t;
	cin>>n>>m;
	t=n;
	n=max(n,m);
	m=m+t-n;
	if(n>m)
	{
		int ans;
		ans=n-m;
		if(ans>=m)
		{
			cout<<m<<endl;
			return 0;
		}
		else
		{
			m=m-ans;
			ans+=((2*m)/3);
			cout<<ans;
			return 0;
		}
	}
	else
	{
		int ans=(2*m)/3;
		cout<<ans;
		return 0;
	}

	return 0;
}