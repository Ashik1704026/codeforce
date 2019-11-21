#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n,a,b;
	cin>>n>>a>>b;
	for(int i=0;a*i<=n;i++)
		if((n-(a*i))%b==0)
		{
			cout<<"YES\n";
			cout<<i<<" "<<(n-(a*i))/b;
			return 0;
		}
	cout<<"NO\n";




	return 0;
}