#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    cin>>n;
    char a[1000100],b[1000100];
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
    	cin>>b[i];
    }
    long int count=0;
    int i,j;
    for(i=0;i<n;i++)
    {
        if(b[i]==a[i])
        	a[i]='0';
        else if(b[i]==a[i-1]&&b[i]=='1')
        {
        	count++;a[i-1]='0';
        }
        else if(b[i]==a[i+1]&&b[i]=='1'&&(a[i+1]!=b[i+1]))
        {
        	count++;a[i+1]='0';
        }
        else if(b[i]!=a[i]&&a[i]==b[i+1]&&b[i+1]=='1')
        {
        	count++;a[i]='0';a[i+1]='1';
        }
        else
        {
        	count++;
        }
    }
    cout<<count;




	return 0;
}