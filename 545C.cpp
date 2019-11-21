#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<long int,long int> >v;
    long int a,b,i,j,c=2,d=0,e=0;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    if(n==1)
    {
        cout<<"1\n";
        return 0;
    }
    for(i=1;i<n-1;i++)
    {


        if((v[i].first-v[i-1].first>v[i].second)&&(v[i].first-v[i].second>d)){
            e=v[i].first-v[i].second;
            c+=1;
        }
        else if(v[i+1].first-v[i].first>v[i].second){
            d=v[i].first+v[i].second;
            c+=1;

        }
    }
    cout<<c<<endl;



    return 0;
}
