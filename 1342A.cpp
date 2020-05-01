#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t --){
        long x,y;
        cin >> x >> y;
        long a,b;
        cin >> a >>b;
        long long sum = 0;
        if(b > (2 * a)){
            sum = (a *(long long) x) + (a *(long long) y);
            cout << sum << "\n";
        }
        else{
        sum = b * (long long) min(x,y);
        long z = max(x,y) - min(x,y);
        sum += z * (long long) a;
        cout << sum << "\n";
        }

    }


    return 0;
}