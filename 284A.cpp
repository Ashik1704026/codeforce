#include <bits/stdc++.h>
using namespace std;
int main()
{
	int p;
	cin>>p;
	long long pw=1,cnt=0;
	for(int i=1;i<p;i++)
	{
		for(int j=1;j<p-1;j++)
		{
			pw*=i;
			if(pw%p==0)
				break;
			cnt++;
		}
		//cout<<cnt<<" "<<pw<<endl;
		if(((pw*i)-1)%p==0 && cnt==p-2)
		{
			cout<<i<<endl;
			return 0;
		}
		pw=1;
		cnt=0;
	}


	return 0;
}