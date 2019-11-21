#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,check=0;
    cin>>n>>m;
    bool road_train[500][80000],road_bus[500][8000];
    for(int i=1;i<=m;i++)
    {
    	int a,b;
    	cin>>a>>b;
    	road_train[a][b]=1;
    	road_train[b][a]=1;
    }
    for(int i=1;i<=n;i++)
    {
    	for(int j=1;j<=n;j++)
    	{
    		if(road_train[i][j]!=1)
    		{
    			check=1;
    			road_bus[i][j]=1;
    		}
    	}
    } 
    int train_dest[600],bus_dest[600];
    train_dest[1]=0;
    bus_dest[1]=0;
    int visited_train[600]={0};
    int visited_bus[600]={0};
    int c_train=0,c_bus=0;
    queue<int>q_train;
    queue<int>q_bus;
    int flag=0;
    q_train.push(1);
    while(!q_train.empty())
    {
    	int train_r=q_train.front();
    	q_train.pop();
    	visited_train[1]=1;
    	for(int i=1;i<=n;i++)
    	{
    		if(visited_train[i]==0&&road_train[train_r][i]==1)
    		{
    			visited_train[i]=1;
                train_dest[i]=train_dest[train_r]+1;
                q_train.push(i);
                if(i==n)
                {
                    flag=1;
                	break;
                }
    		}
    	}
    	if(flag==1)
    		break;
    }
    q_bus.push(1);
    while(!q_bus.empty())
    {
    	int bus_r=q_bus.front();
    	q_bus.pop();
    	visited_bus[1]=1;
    	for(int i=1;i<=n;i++)
    	{
    		if(visited_bus[i]==0&&road_bus[bus_r][i]==1)
    		{
    			visited_bus[i]=1;
    			bus_dest[i]=bus_dest[bus_r]+1;
                q_bus.push(i);
                if(i==n)
                {
                    flag=0;
                	break;
                }
    		}
    	}
    	if(flag==0)
    		break;
    }
    if(train_dest[n]==0||bus_dest[n]==0)
    	cout<<"-1";
    else if(train_dest[n]>bus_dest[n])
    	cout<<train_dest[n];
    else
    	cout<<bus_dest[n];



	return 0;
}