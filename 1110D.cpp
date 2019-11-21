#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,ans=0;
	cin>>n>>m;
	int ar[n];
	for(int i=0;i<n;i++)
		cin>>ar[i];
	sort(ar,ar+n);
	for(int i=0;i<n-2;i++)
	{
		if(ar[i]+ar[i+1]>ar[i+2])
		{
			ans+=1;
			i+=2;
		}
	}
	cout<<ans<<endl;



	return 0;
}
  