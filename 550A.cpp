#include<bits/stdc++.h>
using namespace std;
int main()
{
    int f1=0,f2=0,f3=0,f4=0,i=0;
    string str;
    cin>>str;
    for(i=0;i<str.size()-1;i++)
    {
        if(str[i]=='A' && str[i+1]=='B')
        {
            f1=1;
            break;
        }
    }    
    for(i+=2;i<str.size()-1;i++)
    {
        if(str[i]=='B'&& str[i+1]=='A')
        {
            f2=1;
            break;
        }
    }
    for(i=0;i<str.size()-1;i++)
    {
        if(str[i]=='B'&& str[i+1]=='A')
        {
            f3=1;
            break;
        }
    }
    for(i+=2;i+1<str.size();i++)
    {
        if(str[i]=='A'&& str[i+1]=='B')
        {
            f4=1;
            break;
        }
    }
    //cout<<f1<<f2<<f3<<f4<<endl;
    if(f1 && f2)
        cout<<"YES\n";
    else if(f3 && f4)
        cout<<"YES\n";
    else
    {
        cout<<"NO\n";
    }
    

    return 0;
}