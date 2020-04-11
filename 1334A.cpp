#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t --){
        int n,flag = 1;
        cin >>  n;
        pair<int,int> ar[n],br[n];
        int mn = 100000;
        for(int i = 0;i < n;i ++){
            cin >>ar[i].first >> ar[i].second;
            br[i].first = ar[i].first;
            br[i].second = ar[i].second;
        }
        for(int i = 1;i < n;i ++){
            if(ar[i].first < ar[i-1].first)
                flag = 0;
        }
        for(int i = 0;i < n;i ++){
            if(br[i].second > br[i].first)
                flag = 0;
        }
        for(int i = 1;i < n;i ++){
            if(br[i].second < br[i-1].second)
                flag = 0;
        }
        for(int i = 1;i < n;i ++){
            if(br[i].second > br[i-1].second && br[i].first <= br[i-1].first)
                flag = 0;
        }
        for(int i = 1;i < n;i ++){
            if(br[i].first > br[i-1].first && br[i].second < br[i-1].second)
                flag = 0;
        }
    if(flag)
        cout << "YES\n";
    else
        cout << "NO\n";
    }




    return 0;
}