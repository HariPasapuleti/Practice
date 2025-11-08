#include <bits/stdc++.h>

using namespace std;

void perfect(int n)
{
    int sum=0;
    for(int i=1;i*i<n;i++)
    {
        if(n%i==0) {
            if(i==1) sum+=i;
            else sum+=(i+n/i);
        }
    }
    cout << sum;
    if(sum==n) cout << "Perfect Number" << endl;
    else cout << "Not a perfect number" << endl;
}


int main()
{
    int n=28;
    perfect(n);
    return 0;
}