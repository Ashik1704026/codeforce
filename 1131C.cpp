#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long ar[n],br[n],cr[n];
	for(int i=0;i<n;i++)
		cin>>ar[i];
	sort(ar,ar+n);
	for(int i=0,j=0;i<n;i+=2,j++)
		br[j]=ar[i];
	int j=0;
	for(int i=1;i<n;i+=2,j++)
		cr[j]=ar[i];
	reverse(cr,cr+j);
	for(int i=0;i<n-j;i++)
		cout<<br[i]<<" ";
	for(int i=0;i<j;i++)
		cout<<cr[i]<<" ";


	return 0;
}