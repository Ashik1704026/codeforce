#include<bits/stdc++.h>
using namespace std;

long ar[231078];

struct segment
{
    long val,lvl;
}tree[550050];


void build(int node,int l,int r)
{
    if(l==r)
    {
        tree[node].val=ar[l];
        tree[node].lvl=0;
        return;
    }
    int left=2*node;
    int right=left+1;
    int mid=(l+r)/2;
    build(left,l,mid);
    build(right,mid+1,r);
    tree[node].lvl=tree[left].lvl+1;
    if(tree[node].lvl & 1)
        tree[node].val=tree[left].val | tree[right].val;
    else
    {
        tree[node].val=tree[left].val ^ tree[right].val;
    }
}

void update(int node,int l,int r,int i,long newVal)
{
    int left=2*node;
    int right=left+1;
    int mid=(l+r)/2;
    if(l>i || r<i)
        return;
    if(l>=i && r<=i)
    {
        ar[l]=newVal;
        tree[node].val=ar[l];
        return;
    }
    update(left,l,mid,i,newVal);
    update(right,mid+1,r,i,newVal);
    if(tree[node].lvl & 1)
        tree[node].val=tree[left].val | tree[right].val;
    else
    {
        tree[node].val=tree[left].val ^ tree[right].val;
    }
}


int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    n=pow(2.0,n);
    for(int i=1;i<=n;i++)
        scanf("%ld",&ar[i]);
    build(1,1,n);
    while (m--)
    {
        int  a;
        long b;
        scanf("%d%ld",&a,&b);
        update(1,1,n,a,b);
        printf("%ld\n",tree[1].val);
    }  
}