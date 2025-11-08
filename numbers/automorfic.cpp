#include <bits/stdc++.h>

using namespace std;

void automorfic(int n)
{
    int squr=n*n;
    int temp=squr;
    while(temp>0)
    {
        if(n==0) {
            cout << "Yes" << endl;
            return;
        }
        if(temp%10!=n%10) {
            cout << "No" << endl;
            return;
        }
        temp/=10;
        n/=10;
    }
}


int main()
{
    int n=25;
    automorfic(n);
    return 0;
}