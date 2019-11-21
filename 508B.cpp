#include<bits/stdc++.h>
using namespace std;
int main()
{
    int flag=0;
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if((str[i]-'0')%2==0)
            flag=1;
    }
    if(!flag)
    {
        cout<<"-1";
        return 0;
    }
    for(int i=0;i<str.size()-1;i++)
    {
        if((str[i]-'0')%2==0)
            {
                if(str[i]<str[str.size()-1])
                    {
                        char ch;
                        ch=str[i];
                        str[i]=str[str.size()-1];
                        str[str.size()-1]=ch;
                        cout<<str;
                        return 0;
                    }
            }
    }
    for(int i=str.size()-1;i>=0;i--)
    {
        if((str[i]-'0')%2==0)
        {
            char ch;
            ch=str[i];
            str[i]=str[str.size()-1];
            str[str.size()-1]=ch;
            cout<<str;
            return 0;   
        }
    }


    return 0;
}