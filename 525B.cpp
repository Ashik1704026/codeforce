#include <bits/stdc++.h>
using namespace std;
int main()
{
    string sr;
    cin>>sr;
    int n,k,l,i=0,l1;
    l=sr.size();
    cin>>n;
    int ar[l]={0};
    while(n--)
    {
        cin>>k;
        ar[--k]++;
        ar[l-k]--;
    }
    k=0;
    for(i=0;i<l;i++)
    {
        k+=ar[i];
        (k%2==0)?cout<<sr[i]:cout<<sr[l-i-1];
    }




	return 0;
}