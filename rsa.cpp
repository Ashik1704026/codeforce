#include<bits/stdc++.h>
 
using namespace std;
 
long int p, q, n, t, flag, e[10000], d[10000], temp[10000], j, m[10000], en[10000], i;
char msg[100];
long prime(long int);
void ce();
long int cd(long int);
void printmod();
long prime(long int pr)
{
    int i;
    j = sqrt(pr);
    for (i = 2; i <= j; i++)
    {
        if (pr % i == 0)
            return 0;
    }
    return 1;
}

long mod(long x,long y,long z){
    long xx = 1;
    for(int w = 0;w < y;w++){
        xx = (xx * x) % z;
    }
    return xx;
}

int main()
{
    cout << "\nENTER FIRST PRIME NUMBER\n";
    cin >> p;
    flag = prime(p);
    if (flag == 0)
    {
        cout << "\nWRONG INPUT\n";
        exit(1);
    }
    cout << "\nENTER ANOTHER PRIME NUMBER\n";
    cin >> q;
    flag = prime(q);
    if (flag == 0 || p == q)
    {
        cout << "\nWRONG INPUT\n";
        exit(1);
    }
    for (i = 0; msg[i] != '\0'; i++)
        m[i] = msg[i];
    n = p * q;
    t = (p - 1) * (q - 1);
    ce();
    cout << "\nPOSSIBLE VALUES OF e AND d ARE\n";
    for (i = 0; i < j - 1; i++)
        cout << e[i] << "\t" << d[i] << "\n";
    printmod();
    return 0;
}
void ce()
{
    int k;
    k = 0;
    for (i = 2; i < t; i++)
    {
        if (t % i == 0)
            continue;
        flag = prime(i);
        if (flag == 1 && i != p && i != q)
        {
            e[k] = i;
            flag = cd(e[k]);
            if (flag > 0)
            {
                d[k] = flag;
                k++;
            }
            if (k == 99)
                break;
        }
    }
}
long int cd(long int x)
{
    long int k = 1;
    while (1)
    {
        k = k + t;
        if (k % x == 0)
            return (k / x);
    }
}
void printmod(){
    cout << "Enter the value for e:  ";
    long ee,dd,msgg;
    cin >> ee;
    cout << "\n";
    cout << "Enter the value for d:  ";
    cin >> dd;
    cout << "\nEnter the message m:  ";
    cin >> msgg;
    cout <<"\nEncrypted message (" << msgg << "^" << ee << ") mod " << n << " = ";
    long long pw = mod(msgg,ee,n);
    cout << pw << "\n";
    cout <<"\nDecrypted message (" << pw << "^" << dd << ") mod " << n << " = ";
    pw = mod(pw,dd,n);
    cout << pw % n << "\n\n";
}
