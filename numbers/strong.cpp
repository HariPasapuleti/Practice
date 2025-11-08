#include <bits/stdc++.h>
#include <string>

using namespace std;

int factorial(int digit)
{
    if(digit<1){
        return 1;
    }
    return digit*factorial(digit-1);
}

int main()
{
    int n=146;
    int temp=n,sum=0;
    while(temp>0)
    {
        sum+=factorial(temp%10);
        temp/=10;
    }
    cout << ((sum==n)?"Strong":"Week") << endl;
    return 0;
}