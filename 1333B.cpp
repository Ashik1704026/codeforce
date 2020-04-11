#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t --){
        int n,flag = 1;
        cin >> n;
        int ar[n],br[n],st[n][3];
        memset(st,0,sizeof(st));
        int zero = -1,mn = -1,mx = -1;
        for(int i = 0;i < n;i ++){
            cin >> ar[i];
            if(ar[i] == 0){
                zero = i;
            }
            else if(ar[i] == 1)
                mx = i;
            else 
                mn = i;
            st[i][0] = zero;
            st[i][1] = mn;
            st[i][2] = mx;
                
        }
        for(int i = 0;i < n;i ++)
            cin >> br[i];
        if(ar[0] != br[0]){
                flag = 0;
            }
        for(int i = n-1;i > 0;i --){
            if(ar[i] != br[i] && i > 0){
                if(ar[i] < br[i] && st[i-1][2] == -1){
                    flag = 0;
                }
                else if(ar[i] > br[i] && st[i-1][1] == -1){
                    flag = 0;
                }
            }
        }
        if(flag)
            cout << "YES\n";
        else 
            cout << "NO\n";
        
    }



    return 0;
}