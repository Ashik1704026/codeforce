#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t --){
        long n,x;
        cin>>n>>x;
        long ar[n];
        for(int i = 1;i <= n;i ++)
            cin >> ar[i];
        double c = 0.0,t = 0.0;
        int a=0;
        sort(ar+1,ar+n+1,greater<int>());
        for(int i = 1;i <= n;i ++){
            c += (ar[i] * 1.0);
            t = c / (i * 1.0);
            if(t >= x)
                a ++;
        } 
        cout << a <<"\n";
    }



    return 0;
}