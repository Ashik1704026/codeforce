#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n,m;
	cin>>n>>m;
	std::vector<pair<long int , long int> > v;
	long int a[n+m],b[n+m],i,driver[n+m]={0},j=0;
    for(i=0;i<n+m;i++)
    	cin>>a[i];
    for(i=0;i<n+m;i++)
    {
    	cin>>b[i];
    	if(b[i]==1)
    	{
            driver[j]=i;
            j++;
    	}
    }
    /*for(i=0;i<n+m;i++)
    	v.push_back(make_pair(a[i],b[i]));
    if(driver>1)
    {
        for()	
    }*/
    if(m==1)
    {
    	cout<<n;
    	return 0;
    }
    for(i=0;i<n+m;i++)
    {
        if(a[driver[i]+1]-a[driver[i]]<=a[driver[j-1]]-a[driver[]])
    }



	return 0;
}