#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int l,r,i,j,k=0;
    cin>>l>>r;
    j=l+1;
    cout<<"YES\n";
    for(i=l;i<r;)
    {
    	cout<<i<<" "<<j<<endl;
    	i+=2;
    	j+=2;
    }

	return 0;
}