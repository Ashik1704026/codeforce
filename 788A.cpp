#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long input[n+10];

    for(int i=0;i<n;i++){
        cin>>input[i];
    }

    long ar[n+10];
    for(int i=1;i<n;i++)
        ar[i]=abs(input[i-1]-input[i]);

    long long odd[n+10],even[n+10];
    for(int i=1;i<n;i++){
        if(i%2==0){
            odd[i]=-ar[i];
            even[i]=ar[i];
        }
        else{
            odd[i]=ar[i];
            even[i]=-ar[i];
        }
    }

    // for(int i=1;i<n;i++){
    //     cout<<odd[i]<<" "<<even[i]<<"\n";
    // }


    long long odd_total_max=0,odd_current_max=0;
    long long even_total_max=0,even_current_max=0;
    for(int i=1;i<n;i++){
        odd_current_max+=odd[i];
        if(odd_total_max<odd_current_max)
            odd_total_max=odd_current_max;
        if(odd_current_max<0)
            odd_current_max=0;
        even_current_max+=even[i];
        if(even_total_max<even_current_max)
            even_total_max=even_current_max;
        if(even_current_max<0)
            even_current_max=0;
    }
    cout<<max(odd_total_max,even_total_max);

    return 0;
}