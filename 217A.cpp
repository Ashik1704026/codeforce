#include<bits/stdc++.h>
using namespace std;
int x[1000],y[1000];
int n;
int visited[1000]={0};
void dfs(int node){
    visited[node]=1;
    for(int i=0;i<n;i++)
        if((x[node]==x[i] || y[i]==y[node]) && !visited[i]) dfs(i);
}
int main(){
    cin>>n;
    pair<int,int>ar[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
        cin>>y[i];
    }
    int cnt=-1;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            dfs(i);
            cnt++;
        }
    }
    cout<<cnt;

    return 0;
}





// #include<bits/stdc++.h>
// using namespace std;
// int n,x[101],y[101],ans=-1,vis[101];
// void dfs(int a){
// 	vis[a]=1;
// 	for(int i=1;i<=n;i++)if((x[i]==x[a] || y[i]==y[a]) && !vis[i])dfs(i);
// }
 
// int main(){
// 	cin>>n;
// 	for(int i=1;i<=n;i++)cin>>x[i]>>y[i];
// 	for(int i=1;i<=n;i++)if(!vis[i]){dfs(i),ans++;
//     cout<<x[i]<<" "<<y[i]<<"\n";}
// 	cout<<ans<<endl;
// }







