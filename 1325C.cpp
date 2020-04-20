#include<bits/stdc++.h>
using namespace std;
int ar[100010],br[100010],cr[100010];
int main(){
    int n;
    cin >> n;
    for(int i = 0;i < n - 1;i ++){
        cin >>  ar[i] >> br[i];
        cr[ar[i]] ++;
        cr[br[i]] ++;
    }
    int cnt = 0,mn = 0;
    for(int i = 1;i <= n;i ++)
        if(cr[i] == 1)
            cnt ++;
    for(int i = 0;i < n - 1;i ++){
        if(cr[ar[i]] == 1 || cr[br[i]] == 1)
            cout << mn ++ << "\n";
        else
            cout << cnt ++ << "\n";
    }

    return 0;
}