#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n,k,cnt=0,ans=1,i=2;
	cin>>n>>k;
	if(k==1)
	{
		cout<<n<<endl;
		return 0;
	}
	for(int i=2;n/2>=1;)
	{
		n/=2;
		cnt++;
	}
	//cout<<cnt;
	while(cnt--)
	{
		ans+=i;
		i*=2;
	}
	cout<<ans;



	return 0;
}