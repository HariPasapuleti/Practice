#include <bits/stdc++.h>

using namespace std;


bool isPrime(int n)
{
    if(n==2||n==3) return true;
    if(n<2||n%2==0||n%3==0) return false;
    for(int i=5;i*i<=n;i+=6)
    {
        if((n%i)==0||(n%(i+2))==0) return false;
    }
    return true;

}



int main()
{
    int n=74;
    for(int i=1;i<=n/2;i++)
    {
        if(isPrime(i) && isPrime(n-i)) {
            cout << i << " and " << n-i << endl;;
        }
    }
    return 0;
}