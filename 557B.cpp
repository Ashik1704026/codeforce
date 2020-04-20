#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long w;
    cin >> w;
    long ar[2 * n];
    for(int i = 0;i < 2 * n;i ++)
        cin >> ar[i];
    sort(ar,ar+(2 * n));
    long x = ar[0],y = ar[n];
    double boy = ((w * 1.0) / 3.0) * 2.0;
    double girl = (w * 1.0) -boy;
    if(y < 2 * x){
        double a = y * n * 1.0;
        double b = (y * 1.0) / 2.0;
        b = b * n * 1.0;
        b += a;
        (b >= w)? cout << fixed << setprecision(6) << w : cout << fixed << setprecision(6) << b;
    }
    else{
        double a = x * n * 1.0;
        double b = x * 2.0;
        b = b * n * 1.0;
        b += a;
        (b >= w)? cout << fixed << setprecision(6) << w : cout << fixed << setprecision(6) << b;
    }


    return 0;
}