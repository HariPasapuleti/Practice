#include <bits/stdc++.h>

using namespace std;

void fabbinocci(int n)
{
    if(n==0) cout << "0"<< endl;
    else if(n==1)cout << "0" << " "<< "1" << endl;
    else {
        int fib[n+1];
        cout << sizeof(fib)/sizeof(fib[0])<<endl;;
        fib[0]=0;
        fib[1]=1;
        cout << fib[0] << " " << fib[1] << " ";
        for(int i=2;i<=n;i++)
        {
            fib[i]=fib[i-1]+fib[i-2];
            cout << fib[i] << " ";
        }
    }
    
}


int main()
{
    int n=9;
    fabbinocci(n);
    return 0;
}