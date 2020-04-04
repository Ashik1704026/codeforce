#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t --){
        int n;
        cin >> n;
        long a;
        long long sum,xr;
        cin>>sum;
        xr=sum;
        for(int i = 1;i < n;i ++){
            cin >> a;
            sum += a;
            xr ^= a;
        }
        cout<<"2\n"<<xr<<" "<<sum+xr<<"\n";
    }



    return 0;
}