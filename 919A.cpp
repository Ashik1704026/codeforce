#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
    cin>>n>>m;
    int i;
    std::vector<pair<double , double> > v;
    for(i=0;i<n;i++)
    {
    	cin>>a>>b;
    	v.push_back(make_pair(a,b));
    }
    double c=0.0,d=10000.0;
    for(i=0;i<n;i++)
    {
    	c=(float)(v[i].first*1.0)/(v[i].second*1.0);
        (d<c)?d=d:d=c;
    }
    (d<c)?d=d:d=c;
    printf("%.10lf\n",d*m );




	return 0;
}