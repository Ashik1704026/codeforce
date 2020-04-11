#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t --){
        int n,x;
        cin >> n >> x;
        int ar[2000];
        memset(ar,0,sizeof(ar));
        while(n --){
            int a;
            cin >> a;
            ar[a] ++;
        }
        int ans = 0;
        for(int i = 1; (ar[i] || x) ;i ++){
            if(ar[i] == 0){
                ans ++;
                ar[i] = i;
                x --;
            }
            else
                ans ++;
        }
        cout << ans <<"\n";
    }



    return 0;
}