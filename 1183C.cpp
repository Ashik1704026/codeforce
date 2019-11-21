#include <bits/stdc++.h>
using namespace std;
int main()
{
	int q;
	cin>>q;
	while(q--)
	{
		long long k,n,a,b,x,diff,y;
		cin>>k>>n>>a>>b;
		x=k-(n*a);
		if(x>0)
			cout<<n<<"\n";
		else
		{
			x=((-1)*x)+1;
			diff=a-b;
			y=ceil((x*1.0)/(diff*1.0));
			if(y>n)
				cout<<"-1\n";
			else
				cout<<n-y<<"\n";
		}

	}


	return 0;
}