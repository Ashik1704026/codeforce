#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int ar[n];
    int check[500000];
    memset(check,0,sizeof(check));
    for(int i = 0;i < n;i ++){
        cin >> ar[i];
    }
    int sum = 0,l = 0;
    for(int i = 0;i < n;i ++){
        if(! check[ar[i]])
            sum += 1;
        check[ar[i]] += 1;
        while(check[ar[l]] > 1){
            check[ar[l]] -= 1;
            l += 1;
        }
        if(sum == k){
            while(check[ar[l]] > 1){
            l += 1;
            check[ar[l]] -= 1;
            cout << l;
        }
            cout << l + 1 << " " << i+1;
            return 0;
        }
    }
    cout << "-1 -1";



    return 0;
}