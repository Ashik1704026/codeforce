#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t --){
        int n;
        cin >> n;
        map<int,int> cnt[n+200];
        vector<int>v[n+200];
        int ar[n+200];
        int ans = 0;
        // for(int i = 0;i < n + 100;i ++){
        //     cnt[i].clear();
        //     v[i].clear();
        // }
        for(int i = 1;i <= n;i ++){
            cin >> ar[i];
            for(int j = 1;j <= 200;j ++) cnt[i][j] = cnt[i-1][j];
            ++cnt[i][ar[i]];
            v[ar[i]].push_back(i);
            ans = max(ans,cnt[i][ar[i]]);
        }
        // for(int i = 1;i <= n;i ++){
        //     for(int j = 1;j <= 3;j ++)
        //         cout << cnt[i][j] << " ";
        //     cout << "\n";
        // }
        for(int i = 1;i <= 200;i ++){
            int k = v[i].size() / 2;
            for(int j = 0;j < k;j ++){
                int pos1 = v[i][j];
                int pos2 = v[i][v[i].size() - j - 1];
                for(int x = 1;x <= 200;x ++){
                    ans = max(ans,(j + 1) * 2 + cnt[pos2 - 1][x] - cnt[pos1][x]);
                }
            }
        }
        cout << ans << "\n";
    }


    return 0;
}