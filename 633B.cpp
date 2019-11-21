#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m,ar[5];
	cin>>m;
	long long n=1;
	while(n<=1000000)
	{
		int s=5,r=0,fl=8;
		while(fl--)
		{
			r+=n/s;
			s*=5;
		}
		if(m-r==0)
		{
			cout<<"5\n";
			int x=5;
			while(x--)
			{
				cout<<n<<" ";
				n++;
			}
			return 0;
		}
		n++;
	}
	cout<<"0";



	return 0;
}