#include <bits/stdc++.h>
using namespace std;
map<long long ,long long>chck;
int main()
{
	long long n,nn,cnt=0,flag=1;
	cin>>n;
	nn=n;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(!chck[i])
			for(int j=2*i;j<=sqrt(n);j+=i)
			{
				chck[j]=1;
			}
	}
	while(n!=0)
	{
		for(int i=2;i<=sqrt(nn);i++)
		{
			if(n%2==0)
			{
				cout<<cnt+(n/2);
				return 0;
			}
			else if(!chck[i])
			{
				if(n%i==0)
				{
					n=n-i;
					cnt+=1;
					flag=0;
				}
			}
		}
		if(n==nn)
			break;
	}
	if(flag)
	{
		cout<<"1\n";
		return 0;
	}



	return 0;
}