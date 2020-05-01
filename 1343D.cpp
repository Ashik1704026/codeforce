#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t --){
        int n,k;
        cin >> n >> k;
        int ar[n + 10];
        for(int i = 1;i <= n;i ++)
            cin >> ar[i];
        int pref[2 * k + 10];
        memset(pref,0,sizeof(pref));
        map<int,int> mp;
        vector<pair<int,int> > v;
        for(int i = 1,j = n;i <= n / 2;i ++,j --)
            v.push_back(make_pair(min(ar[i],ar[j]),max(ar[i],ar[j])));
        for(auto it : v){
            int l = it.first + 1;
            int r = it.second + k;
            mp[it.first + it.second] ++;
            pref[l] += 1;
            pref[r + 1] -= 1;
        }
        for(int i = 1;i <= 2 * k + 10;i ++)
            pref[i] += pref[i -1];
        int mn = n;
        for(int i = 2;i <= 2 * k;i ++){
            int cnt0 = mp[i];
            int cnt1 = pref[i] - cnt0;
            int cnt2 = (n / 2) - cnt1 - cnt0;
            int cnt = cnt1 + (cnt2 * 2);
            mn = min(mn,cnt);
        }
        cout << mn << "\n";
    }


    return 0;
}