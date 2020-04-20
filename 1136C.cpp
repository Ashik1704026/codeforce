#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    long ar[n][m],br[n][m];
    vector<long> cr[100000],dr[100000];
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < m;j ++){
            cin >> ar[i][j];
            cr[i + j].push_back(ar[i][j]);
        }
    }
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < m;j ++){
            cin >> br[i][j];
            dr[i + j].push_back(br[i][j]);
        }
    }
    int flag = 1;
    for(int i = 0;i < n + m - 1;i ++){
        sort(cr[i].begin(),cr[i].end());
        sort(dr[i].begin(),dr[i].end());
        for(int j = 0;j < cr[i].size();j ++){
            if(cr[i][j] != dr[i][j]){
                flag = 0;
                break;
            }
        }
    }
    if(flag)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}