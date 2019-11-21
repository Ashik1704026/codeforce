#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    int ar[1000100]={0},s=0,i;
    while(n--)
    {
        scanf("%d",&k);
        ar[k]++;
    }
    for(i=0;i<=1000100;i++)
    {
    	s+=ar[i]%2;
    	ar[i+1]+=ar[i]/2;

    }
    cout<<s;

	return 0;
}
