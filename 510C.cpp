#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,j=0;
	cin>>n;
	string str;
	string ch;
	cin>>ch;
	str+=ch[0];
	for(int i=1;i<n;i++)
	{
		cin>>ch;
		if(ch[0]!=str[j])
		{
			str+=ch[0];
			j++;
		}
	}
	string str1;
	str1=str;
	sort(str.begin(),str.end());
	for(int i=0;i<j;i++)
	{
		if(str[i]==str[i+1])
		{
			cout<<"Impossible\n";
			return 0;
		}
	}
	map< char,int >m;
	for(int i=0;i<=j;i++)
	{
        char ch;
        ch=str[i];
        m[ch]=1;
    }
    int i=26,k=0;
    char ch1='a';
    while(i--)
    {
    	if(ch1==str1[k] && k<=j)
    	{
    		cout<<ch1;
    		ch1++;
    		k++;
    	}
    	 else if(ch1<str1[k])
    	{
    		
    				if(m[ch1]!=1)
    				{
    					cout<<ch1;
    					ch1++;
    				}
    				else
    				{
    					ch1++;
    					i+=1;
    				}
    		
    	}
    	else if(ch1>str1[k] && k<=j)
    	{
    				cout<<str1[k];
    				k++;
    	}
    	else if(k>j)
    	{
    			if(m[ch1]!=1)
    			{
    				cout<<ch1;
    				ch1++;
    			}
       	}
    }



	return 0;
}
