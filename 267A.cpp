#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		long long a,b,ans=0,c,d,t;
		cin>>a>>b;
		t=a;
		a=max(a,b);
		b=min(t,b);
		c=a;
		d=b;
		while(b!=0)
		{
			ans+=(a/b);
			a=a%b;
			t=a;
			a=max(a,b);
		    b=t+b-a;
		}
		cout<<ans<<"\n";
	}



	return 0;
}