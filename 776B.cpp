#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int ar[n+100]={0};
	for(int i=2;i<=n+1;i++)
	{
		if(!ar[i])
		{
			for(int j=i*2;j<=n+1;j+=i)
				ar[j]=1;
		}
	}
	if(n>2)
		cout<<"2\n";
	else
		cout<<"1\n";
	for(int i=2;i<=n+1;i++)
	{
		if(ar[i])
			cout<<"2 ";
		else
			cout<<"1 ";
	}



	return 0;
}