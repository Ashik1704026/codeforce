#include <bits/stdc++.h>
using namespace std;
int main()
{
	int q;
	cin>>q;
	while(q--)
	{
		int n,sum=0,j=1,k;
		cin>>n;
		vector<int>ar(n+1);
		for(int i=0;i<n;i++)
		{
			int a ;
			cin>>a;
			ar[a]++;
		}
		sort(ar.begin(),ar.end(),greater<int>());
		k=ar[0];
		sum=ar[0];
		while(k>0 && j<=n)
		{
			k=min(ar[j],k-1);
			sum+=k;
			j++;
		}
		cout<<sum<<"\n";
	}


	return 0;
}