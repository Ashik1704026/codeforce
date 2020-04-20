#include<bits/stdc++.h>
using namespace std;
int ar[200050];
int inp[200050];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    int n,flag = 1;
    cin >> n;
    vector<int>indx;
    for(int i = 1;i <= n;i ++){
        cin >> inp[i];
        ar[inp[i]] = 1;
        if(inp[i] == 0) indx.push_back(i);
    }
    vector<int> v;
    for(int i = 1;i <= n;i ++){
        if(ar[i] == 0)
            v.push_back(i);
    }
    for(int i = 0;i < indx.size() - 1;i ++){
        if(indx[i] == v[i] || indx[i + 1] == v[i + 1])
            swap(v[i],v[i + 1]);
        inp[indx[i]] = v[i];
    }
    inp[indx[indx.size() - 1]] = v[indx.size() - 1];
    for(int i = 1;i <= n;i ++)
        cout << inp[i] << " ";

    return 0;
}