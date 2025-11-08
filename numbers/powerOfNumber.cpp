#include <bits/stdc++.h>

using namespace std;

void power(float n, int p)
{
    float ans=1;
    if(p==0) {
        cout << 1 << endl;
        return;
    }
    else if(p==1) {
        cout << n << endl;
        return;
    }
    if(p<0) {
        n=1/n;
        p=-(p+1);
        ans*=n;
    }
    while(p>0)
    {
        if(p%2==1) {
            ans*=n;
            p--;
        }
        else {
            p/=2;
            n*=n;
        }
    }
    cout << ans << endl;
}


int main()
{
    float n=5,p=3;
    cout << pow(n, p) << endl;
    power(n,p);
    return 0;
}