#include<bits/stdc++.h>
using namespace std;
int prblm[100],t[20];
int main(){
    int n,k;
    cin >> n >> k;
    while(n--){
        for(int i = 0;i < k;i ++)
            cin >> t[i];
        prblm[(t[0] * 8) + (t[1] * 4) + (t[2] * 2) + (t[3] * 1)] = 1;
    }
    for(int i = 0;i <= (1 << 4);i ++){
        for(int j = 0;j <= (1 << 4);j ++){
            if((!(i & j)) && prblm[i] && prblm[j]){
                cout << "YES";
                return 0;
            }
        }
    }
    cout<<"NO\n";


    return 0;
}