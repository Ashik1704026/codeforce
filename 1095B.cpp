#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++)
		cin>>ar[i];
	sort(ar,ar+n);
	cout<<min(ar[n-2]-ar[0],ar[n-1]-ar[1]);



	return 0;
}