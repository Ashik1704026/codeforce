#include <bits/stdc++.h>
using namespace std;
int main()
{
	int day,sumTime,i,a,b;
	cin>>day>>sumTime;
	std::vector<pair<int ,int> > v;
	long long int s1=0,s2=0,s3=0;
	int ar[day];
	for(i=0;i<day;i++)
	{
        cin>>a>>b;
        v.push_back(make_pair(a,b));
        s1+=a;s2+=b;
	}
	if(sumTime>=s1&&sumTime<=s2)
	{
		cout<<"YES\n";
		for(i=0;i<day;i++)
		{
            ar[i]=v[i].first;
            s3+=ar[i];
		}
		if(s3!=sumTime)
		{
			for(i=0;i<day;i++)
			{
				if(sumTime-s3+ar[i]<=v[i].second)
				{
                    ar[i]+=sumTime-s3;
                    s3+=sumTime-s3;
				}
				else if(sumTime-s3>v[i].second)
				{
					ar[i]=v[i].second;
					s3+=v[i].second-v[i].first;
				}
				else if(s3==sumTime)
				{
				    for(i=0;i<day;i++)
			        {
			            cout<<ar[i]<<" ";
                    }
                    return 0;	
				}
			}
		}
		if(s3==sumTime)
		{
			for(i=0;i<day;i++)
			{
			cout<<ar[i]<<" ";
            }
            return 0;
		}

	}
	cout<<"NO\n";


	return 0;
}