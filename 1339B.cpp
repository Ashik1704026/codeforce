#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t --){
        int n;
        cin>>n;
        long br[n];
        for(int i=0;i<n;i++)
            cin>>br[i];
        sort(br,br+n);
        int i,j,x;
        if(n % 2 != 0){
            x = n / 2;
            i = x - 1,j = x + 1;
            cout << br[n/2] << " ";
        }
        if(n % 2 == 0){
            x = n / 2;
            i = x - 1;
            j = x;
        }
        for(;j <n;i--,j++){
            cout << br[j] <<" "<< br[i] << " ";
        }
        cout << "\n";
    }



    return 0;
}