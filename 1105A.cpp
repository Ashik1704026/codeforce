#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,ar[120000],s=0,t=999999,br[120000]={0},index;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	sort(ar,ar+n);
	for(int i=1;i<=ar[n-1];i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i!=ar[j])
				br[i]+=abs((ar[j]-i))-1;
		}
		if(t>br[i])
		{
			t=br[i];
			index=i;
		}
	}
	cout<<index<<" "<<t;
	return 0;
}