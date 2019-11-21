#include <bits/stdc++.h>
using namespace std;
long long maxx(long long n)
{
	if(n<10)
		return max((long long)1,n);
	return max((n%10)*maxx(n/10),maxx(n/10-1)*9);
}
int main()
{
	long long n;
	cin>>n;
	cout<<maxx(n);
	return 0;
}