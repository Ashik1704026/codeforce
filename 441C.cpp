#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k;
    cin >> n >> m >> k;
    vector<pair<int,int> > v;
    for(int i = 1;i <= n;i ++){
        if(i % 2){
            for(int j = 1;j <= m;j ++)
                v.push_back(make_pair(i,j));
        }
        else{
            for(int j = m;j >= 1;j --)
                v.push_back(make_pair(i,j));  
        }
    }
    if(k - 1)
        cout << "2 ";
    int i = 0;
    for(;i < 2 * (k-1);i ++){
        cout << v[i].first << " " << v[i].second << " ";
        if((i + 1) % 2 == 0 && i + 1 < 2 * (k-1)){
            cout << "\n2 ";
        }
    }
    if(k - 1)
        cout << "\n";
    cout << (m*n) - i << " ";
    for(int j = i;j < m * n;j ++)
        cout << v[j].first << " " << v[j].second << " ";



    return 0;
}