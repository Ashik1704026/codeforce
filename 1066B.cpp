#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n,t,cnt=0;
	cin>>n;
	t=sqrt(n);
	for(int i=2;i<=t;i++)
	{
		if(n%i==0)
			cnt+=1;
	}
	cnt=(cnt*2)+2;
	if(t*t==n)
		cnt-=1;
	cout<<cnt<<endl;


	return 0;
}