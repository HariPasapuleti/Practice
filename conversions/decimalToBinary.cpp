#include <bits/stdc++.h>

using namespace std;


void decimalToBinary(int n)
{
    string res="";
    while(n>0)
    {
        if(n%2) res+='1';
        else res+='0';
        // cout << n%2 << endl;
        n/=2;
    }
    cout << res << endl;
}


int main()
{
    int n = 14;
    decimalToBinary(n);
    return 0;
}