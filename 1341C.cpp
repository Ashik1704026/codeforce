#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    fast;
    int t;
    cin >> t;
    while(t --){
        int n;
        cin >> n;
        int ar[n + 10];
        for(int i = 1;i <= n;i ++)
            cin >>  ar[i];
        vector<pair<int,int> > v;
        for(int i = 1;i <= n;i ++){
            v.push_back(make_pair(ar[i],i));
        }
        sort(v.begin(),v.end());
        int x = n;
        int k = 1,flag = 1;
        map<int,int> ans;
        int cnt = 0, y = 0;;
        while(x > 0){
            for(int i = v[k - 1].second;i <= n && ans[i] != ar[i];i ++){
                if(ans[i] == 0){
                    ans[i] = k ++;
                    x --;
                }
                else if(ans[i] != ar[i]){
                    x --;
                    break;
                }
            }
        }
        for(int i = 1;i <= n;i ++){
            if(ans[i] != ar[i]){
                flag = 0;
                break;
            }
        }
        if(flag)
            cout << "Yes\n";
        else
            cout << "No\n";

    }


    return 0;
}