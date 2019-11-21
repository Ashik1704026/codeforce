#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,s;
    cin>>n>>m>>k>>s;
    //int numOfgoods[n];
    vector<pair<int,int> >numOfgoods;
    for(int i=0;i<n;i++)
    {
    	int a;
    	cin>>a;
    	numOfgoods.push_back(make_pair(i,a));
    }
    vector<int>road[n];
    for(int i=0;i<n;i++)
    {
    	int a,b;
    	cin>>a>>b;
    	road[a].push_back(b);
    	road[b].push_back(a);
    }
    for(int i=1;i<=n;i++)
    {
        queue<int>q;
        q.push(i);
        while(!q.empty())
        {
        	int k=q.front();
        	q.pop();
        	for(int j=0;j<road[k];j++)
        	{
        		
        	}
        }

    }







	return 0;
}