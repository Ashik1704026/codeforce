#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n,k,pw=1,ans;
	cin>>n>>k;
	for(int i=0;i<k;i++)
		pw*=10;

	ans=std::lcm(n,pw);
	cout<<ans;


	return 0;
}