#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ar[100],c;
    int l=0,i;
    cin>>ar;
    l=strlen(ar);
    for(i=0;i<l;i++)
    {
       if(ar[i]>'4')
       {
           ar[i]='9'-ar[i]+'0';
       }
    }
    if(ar[0]=='0')
    	ar[0]='9';

    cout<<ar;
    



	return 0;
}