#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n%4==0)
	{
		cout<<"0\n"<<n/2<<" ";
		for(int i=1;i<=n;i++)
			if(i%4==1||i%4==0)
				cout<<i<<" ";
	}	
	if(n%4==1)
	{
		cout<<"1\n"<<(n/4)+(n/4)+1<<" ";
		for(int i=1;i<=(n/4)+1;i++)
			cout<<i<<" ";
		int m=n/4;
		int z=n;
		while(m--)
		{
			cout<<z<<" ";
			z--;
		}
	}
	if(n%4==2)
	{
		cout<<"1\n"<<n/2<<" ";
		for(int i=1;i<=n;i++)
			if(i%4==1||i%4==0)
				cout<<i<<" ";
	}
	if(n%4==3)
	{
		cout<<"0\n"<<(n/4)+(n/4)+1<<" ";
		for(int i=1;i<=(n/4);i++)
			cout<<i<<" ";
		int m=(n/4)+1;
		while(m--)
		{
			cout<<n<<" ";
			n--;
		}

	}


	return 0;
}