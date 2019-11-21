#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x,y;
    cin>>x>>y;
    pair<int,int>ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i].first;
        cin>>ar[i].second;
    }
    int check[n]={0};
    for(int i=0;i<n;i++){
        if(!check[i]){
            for(int j=i+1;j<n;j++){
                if((x-ar[i].first)*(y-ar[j].second)==(x-ar[j].first)*(y-ar[i].second)){
                    check[i]=i+1;
                    check[j]=i+1;
                }
            }
        }
    }
    //for(int i=0;i<n;i++) cout<<check[i]<<" ";
    int cnt=0;
    sort(check,check+n);
    for(int i=0;i<n-1;i++){
        if(check[i]==0 || check[i]!=check[i+1])
            cnt++;
    }
    //if(check[n-1]==0) cnt++;
    cout<<cnt+1;



    return 0;
}