#include<bits/stdc++.h>
using namespace std;
int p[]={2,3,5,7,11,13,17,19,23,29,31};
int main(){
    int t;
    cin >> t;
    while(t --){
        int n;
        cin >> n;
        int ar[n];
        for(int i = 0;i < n;i ++)
            cin >> ar[i];
        int br[n];
        memset(br,0,sizeof(br));
        int k = 0,x;
        for(int i = 0;i < 11;i ++){
            x = 0;
            for(int j = 0;j < n;j ++){
                if(!br[j] && ar[j] % p[i] == 0){
                    if(br[j] = x) br[j] = k;
                    else{
                        br[j] = ++ k;
                        x = 1;
                    }
                }
            }
        }
        cout << k << "\n";
        for(int i = 0;i < n;i ++)
            cout << br[i] << " ";
        cout << "\n";
    }

    return 0;
}