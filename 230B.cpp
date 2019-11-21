#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	while(n--)
	{
		long long x,i;
		cin>>x;
		long sq=sqrt(x);
		for(i=2;i*i<sq;i++)
			if(x%i==0)
				break;
		if((i*i>sq)&&(sq*1LL*sq==x)&&(x>1))
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}



	return 0;
}