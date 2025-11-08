#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=20;
    int r1=10,r2=18,r3=5;
    int count=0;

    while(n >= r1 || n >= r2)
    {
        if(r1 < abs(r2-r3) || (r2 > n && r1 <= n)) {
            n-=r1;
            count++;
        }
        else if(n >= r2) {
            n-=r2;
            n+=r3;
            count++;
        }
    }

    cout << count << endl;
    return 0;
}