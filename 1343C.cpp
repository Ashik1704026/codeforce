#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t --){
        int n;
        cin >> n;
        long ar[n];
        long pos = 0,neg = -9e9;
        long long possum = 0,negsum = 0,tosum = 0;
        for(int i = 0;i < n;i ++){
            cin >> ar[i];
        }
        for(int  i = 0;i < n;){
            while(ar[i] > 0 && i < n){
                pos = max(pos,ar[i]);
                i ++;
            }
            possum += pos;
            while(ar[i] < 0 && i < n){
                neg = max(ar[i],neg);
                i ++;
            }
            negsum += neg;
            if(possum == 0)
                tosum += negsum;
             else if(negsum == -9e9)
                tosum += possum;
            else
                tosum += negsum + possum;
            pos = 0,neg = -9e9;
            possum = 0,negsum = 0;
        }
        cout << tosum << "\n";

    }



    return 0;
}