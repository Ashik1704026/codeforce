#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define memset(x) memset(x, 0, sizeof(x))
#define lcm(a,b) a*b/__gcd(a,b)
#define mp make_pair
#define pb push_back

int main(){
    int n;
    cin >> n;
    ll pos = 0,neg = 0;
    double ar[n];
    for(int i = 0;i < n;i ++){
        double a;
        cin >> a;
        ar[i] = a;
        if(a < 0)
            neg += a;
        else
            pos += a;
    }
    // cout << neg << " " << pos;
    neg = - neg;
    if(neg == pos){
        for(int i = 0;i < n;i ++)
            cout << (int) ar[i] << "\n";
    }
    else if(neg > pos){
        for(int i = 0;i < n;i ++){
            if(neg > pos){
                if(ar[i] >= 0 && ar[i] != (int) ar[i]){
                    cout << (int) ar[i] + 1 << "\n";
                    pos ++;
                }
                else
                    cout << (int) ar[i] << "\n";
            }
            else
                cout << (int) ar[i] << "\n";
        }
    }
    else{
        for(int i = 0;i < n;i ++){
            if(pos > neg){
                if(ar[i] < 0 && ar[i] != (int) ar[i]){
                    cout << (int) ar[i] - 1 << "\n";
                    neg ++;
                }
                else
                    cout << (int) ar[i] << "\n";
            }
            else
                cout << (int) ar[i] << "\n";
        }
    }
    return 0;
}