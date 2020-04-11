#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum,limit;
    cin >> sum >> limit;
    vector<int> v;
    for(int i = limit;i > 0;i --){
        if(sum - (i & ~(i-1))>=0){
            sum -= (i & ~(i-1));
            v.push_back(i);
        }
    }
    if(sum != 0) cout<<"-1";
    else{
        cout << v.size() << "\n";
        for(auto x : v) cout << x <<" ";
    }


    return 0;
}