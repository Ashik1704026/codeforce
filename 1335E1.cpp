#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t --){
        int n;
        cin >> n;
        int cnt[n+100][500];
        vector<int>v[n+100];
        int ar[n+10];
        int ans = 0;
        for(int i = 0;i < n + 100;i ++){
            memset(cnt[i],0,sizeof(cnt[i]));
            v[i].clear();
        }
        for(int i = 1;i <= n;i ++){
            cin >> ar[i];
            for(int j = 1;j <= 26;j ++) cnt[i][j] = cnt[i-1][j];
            ++cnt[i][ar[i]];
            v[ar[i]].push_back(i);
            ans = max(ans,cnt[i][ar[i]]);
        }
        // for(int i = 1;i <= n;i ++){
        //     for(int j = 1;j <= 3;j ++)
        //         cout << cnt[i][j] << " ";
        //     cout << "\n";
        // }
        for(int i = 1;i <= 26;i ++){
            int k = v[i].size() / 2;
            for(int j = 0;j < k;j ++){
                int pos1 = v[i][j];
                int pos2 = v[i][v[i].size() - j - 1];
                for(int x = 1;x <= 26;x ++){
                    ans = max(ans,(j + 1) * 2 + cnt[pos2 - 1][x] - cnt[pos1][x]);
                }
            }
        }
        cout << ans << "\n";
    }


    return 0;
}



















// #include <bits/stdc++.h>
 
// using namespace std;
 
// #define DIM 100009
// #define INF ((long long)1e18+9ll)
// #define pairll pair<long long,long long>
// #define fi first
// #define se second
// #define ld long double
// #define amen exit(0)
// #define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
// #define endl '\n'
 
// long long i,j,k,l,n,m,sum,res;
 
// long long a[DIM],cnt[DIM][201];
 
// vector<long long>nums[DIM];
 
// int main(){
 
//     fast;
    
//     int nt;
//     cin>>nt;
//     while(nt--){
//         cin>>n;
        
//         for(i=1;i<=200;i++)nums[i].clear();
        
//         res=0;
        
//         for(i=1;i<=n;i++){
//             cin>>a[i];
//             for(j=1;j<=200;j++)cnt[i][j]=cnt[i-1][j];
//             cnt[i][a[i]]++;
//             res=max(res,cnt[i][a[i]]);
            
//             nums[a[i]].push_back(i);
//         }



//         for(int i = 1;i <= n;i ++){
//             for(int j = 1;j < 4;j ++)
//                 cout << cnt[i][j] << " ";
//             cout << "\n";
//         }
            
//         for(i=1;i<=200;i++){
//             k=nums[i].size()/2;
//             cout << k;
//             for(j=0;j<k;j++){
//                 long long pos1=nums[i][j];
//                 long long pos2=nums[i][nums[i].size()-j-1];
//                 // cout<<i<<' '<<pos1<<' '<<pos2<<' '<<nums[i].size()<< " ";
                
//                 for(long long num=1;num<=4;num++){
//                     res=max(res,(j+1)*2+cnt[pos2-1][num]-cnt[pos1][num]);
//                     // cout << res <<"\n";
//                 }
//             }
//         }
//         cout<<res<<endl;
//     }
    
//     amen;
// }
