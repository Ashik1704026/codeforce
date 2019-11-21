#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,s=0,l=0;
    cin>>n>>k;
    int ar[n];
    for(i=0;i<n;i++)
    	cin>>ar[i];
    for(i=0;i<n-1;i++)
    {
    	if(ar[i]+ar[i+1]<k)
    	{
    		l=ar[i+1];
    		//cout<<l<<"  ";
    		ar[i+1]=k-ar[i];
    		//cout<<ar[i+1]<<"  ";
            s+=(ar[i+1]-l);
    	}
    }
    cout<<s<<endl;
    for(i=0;i<n;i++)
    	cout<<ar[i]<<" ";


	return 0;
}