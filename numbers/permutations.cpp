#include <bits/stdc++.h>

using namespace std;

void permutation(int n, int r)
{
    int sum=1;
    for(int i=n-r+1;i<=n;i++)
    {
        sum*=i;
    }
    cout << sum << endl;
}


int main()
{
    int n=7,r=3;
    permutation(n,r);
    return 0;
}