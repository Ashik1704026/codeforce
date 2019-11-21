#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	long long ar[10]={0},br[10]={0};
	for(int i=1;i<=n;i++)
		ar[i%5]+=1;
	for(int i=1;i<=m;i++)
		br[i%5]+=1;
	long long ans=0;
	for(int i=1,j=4;i<=4;i++,j--)
	{
		//cout<<ar[i]<<" "<<br[j]<<endl;
		ans+=(ar[i]*br[j]);
	}
	ans+=ar[0]*br[0];
	cout<<ans;




	return 0;
}