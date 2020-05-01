#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t --){
        int n,k;
        cin >> n >> k;
        long ar[n + 10];
        for(int i = 1;i <= n;i ++)
            cin >> ar[i];
        vector<int> v;
        int p = 0;
        for(int i = 2;i < n; i++){
            if(ar[i] > ar[i - 1] && ar[i] > ar[i + 1]){
                v.push_back(i);
            }
        }
        map<long long,long long> m;
        for(int i = 0;i < v.size();i ++){
            int l = v[i];
            m[l] += 1;
            int r =min(l + k - 2,n);
            m[r] += -1;
        }
        long long sum = 0;
        for(int i = 0;i <= n;i ++){
            sum += m[i];
            m[i] = sum;
        }
        int lw = 1;
        for(int i = 0;i <= n;i ++){
            if(m[i] > p){
                p = m[i];
                lw = max(lw,i - (k - 2));
            }
        }
        cout << p + 1 << " " << lw << "\n";
    }


    return 0;
}