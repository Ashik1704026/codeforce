#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t!=0){
	long long n,k;
	cin>>n>>k;
	int flag=0;
	if(n-k==1)
	{
		if((n+k)%2==0)
		{
			cout<<"NO\n";
			flag=1;
		}
		if(flag==0)
			for(int i=3;i<=sqrt(n+k);i+=2)
		{
			if((n+k)%i==0)
			{
				cout<<"NO\n";
				flag=1;
				break;
			}
		}
		if(flag==0)
			cout<<"YES\n";
	}
	else
		cout<<"NO\n";
	t--;
	}


	return 0;
}