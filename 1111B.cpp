#include <bits/stdc++.h>
using namespace std;
long long int ar[1000000];
int main()
{
	long int n,k,m;
	cin>>n>>k>>m;
	long double sum=0;
	long double avrg=0.0,mx=0.0,x;
	for(int i=1;i<=n;i++)
	{
		cin>>ar[i];
		sum+=ar[i];
	}
	sort(ar+1,ar+n+1);
	mx = (long double)(sum+min(m, n*k))/(long double)(n);
	for(int i=1;i<=(min(n-1,m));i++)
	{
		sum-=ar[i];
		x=sum + min(m-i, (n-i)*k);
		mx = max(mx, (long double)(x)/(long double)(n-i));
	}
	cout<<fixed<<setprecision(20)<<mx<<endl;

	return 0;
}


