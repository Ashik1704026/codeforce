#include <bits/stdc++.h>
using namespace std;
map<int,int>bfs[200020];
int main()
{
    int n;
    int arr[200020];
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
    	int a,b;
    	cin>>a>>b;
    	bfs[a][b]=1;
    	bfs[b][a]=1;
    }
    for(int i=0;i<n;i++)
    	cin>>arr[i];

    int i=0,j=1;
    for(;i<n;i++)
    	while(bfs[arr[i]][arr[j]])
    		j++;

    if(j==n&&arr[0]==1)
        cout<<"Yes";
    else
        cout<<"No";    	

    return 0;
}
