#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k=0,e;
    cin>>n;
    int ar[n+10],i,s=0,d=0,j=0,br[(2*n)+10];
    for(i=1;i<=n;i++)
    {
    	cin>>ar[i];
    	s+=ar[i];
    }
    d=s/(n/2);
    for(i=1;i<=n;i++)
    {
    	if(ar[i])
    	{
    		for(j=2;j<=n;j++)
    		{
    			if((ar[i]+ar[j])==d&&i!=j)
    			{
    				k+=1;
                    br[k]=i;
                    k+=1;
                    br[k]=j;
                    ar[j]=0;
                    break;
    			}
    		}
    		ar[i]=0;
    	}
    }
    for(i=1;i<=n;i++)
    {
    	cout<<br[i]<<" ";
    	if(i%2==0)
    		cout<<endl;
    }




	return 0;
}