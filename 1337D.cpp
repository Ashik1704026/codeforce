#include<bits/stdc++.h>
using namespace std;
long long sq(int x) { return 1ll * x * x; }
long long ans;
void sol(vector<long> a,vector<long> b,vector<long> c){
    for(auto mi : a){
        auto sm = lower_bound(b.begin(),b.end(),mi);
        auto lg = upper_bound(c.begin(),c.end(),mi);
        if(sm == b.end() || lg == c.begin()) continue;
        --lg;
        //cout << mi << " " << *sm << " " << *lg << "\n";
        // cout << sq(*sm);   
        ans = min(ans,sq(*sm - mi) + sq(mi - *lg) + sq(*lg - *sm));
        // cout << ans << "\n";
    }
}

int main(){
    int t;
    cin >> t;
    while(t --){
        int nr,nb,ng;
        ans = 9e18;
        cin >> nr >> ng >> nb;
        vector<long> ar(nr),ab(nb),ag(ng);
        for(int i = 0;i < nr;i ++)
            cin >> ar[i]; 
        for(int i = 0;i < ng;i ++)
            cin >> ag[i];
        for(int i = 0;i < nb;i ++)
            cin >> ab[i];
        sort(ar.begin(),ar.end());
        sort(ag.begin(),ag.end());
        sort(ab.begin(),ab.end());
        sol(ar,ag,ab);
        sol(ab,ag,ar);
        sol(ar,ab,ag);
        sol(ag,ab,ar);
        sol(ag,ar,ab);
        sol(ab,ar,ag);
        cout << ans << "\n";
    }


    return 0;
}
