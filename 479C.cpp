#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long best=0;
    vector<pair<long ,long> > v;
    for(int i=0;i<n;i++)
    {
        long long a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        if(best<=v[i].second)
            best=v[i].second;
        else
            best=v[i].first;
    }
    cout<<best;

    return 0;
}
