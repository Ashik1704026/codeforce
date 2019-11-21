#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n,m,digit=0,sum=0,nin=9,bas=1;
	cin>>n;
	m=n;
	while(n!=0)
	{
		n/=10;
		digit+=1;
	}
	for(int i=1;i<digit;i++)
	{
		sum+=(nin*i);
		nin*=10;
		bas*=10;
	}
	m=m-bas+1;
	sum+=(m*digit);
	cout<<sum;
	return 0;
}