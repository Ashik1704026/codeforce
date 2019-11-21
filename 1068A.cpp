#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,k,l,ans=0;
    cin>>n>>m>>k>>l;
    ((k+l)%m==0)?ans=(k+l)/m:ans=((l+k)/m)+1;
    if(ans*m>n)
    	cout<<"-1";
    else
    	cout<<ans;
	return 0;
}