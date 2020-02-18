#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        int pos=0;
        while(pos<n-1){
            int nxt=min_element(v.begin()+pos,v.end())-v.begin();
            int el=v[nxt];
            v.erase(v.begin()+nxt);
            v.insert(v.begin()+pos,el);
            if(pos==nxt) pos=1+nxt;
            else pos=nxt;
        }
        for(int i=0;i<n;i++) cout<<v[i]<<" ";
        cout<<"\n";

    }
    return 0;
}