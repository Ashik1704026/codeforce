#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    long b[n],g[m];
    long long bsum = 0,gsum = 0;
    for(int i = 0;i < n;i ++){
        cin >> b[i];
        bsum += b[i];
    }
    for(int i = 0;i < m;i ++){
        cin >> g[i];
        gsum += g[i];
    }
    sort(b,b + n);
    sort(g,g + m);
    if(b[n - 1] > g[0]){
        cout << "-1\n";
    }
    else if(b[n - 1] == g [0]){
        long long tot;
        tot = (bsum * (long long) m) + gsum - (b[n - 1] * (long long) m);
        cout << tot << "\n";
    }
    else{
        long long tot;
        tot = (bsum *1LL* (long long) m) + gsum - (b[n - 1] * (long long) (m - 1))- b[ n - 2];
        cout << tot << "\n";
    }




    return 0;
}