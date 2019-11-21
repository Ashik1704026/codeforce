#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,ans=1;
	cin>>n;
	int ar[110000]={0};
	while(n--)
	{
		int a;
		cin>>a;
		int root=sqrt(a);
		for(int i=2;i<=root;i++)
		{
			if(a%i==0)
				ar[i]++;
			while(a%i==0)
				a/=i;
		}
		if(a>1)
			ar[a]++;
	}
	for(int i=0;i<=100000;i++)
		ans=max(ar[i],ans);
	cout<<ans;


	return 0;
}