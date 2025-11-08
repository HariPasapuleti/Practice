#include <bits/stdc++.h>

using namespace std;

void binToDec(string n)
{
    int res=0,base=1;
    for(int i=n.size()-1;i>=0;i--)
    {
        if(n[i]=='1') {
            res+=base;
        }
        base*=2;
        
    }
    cout << res << endl;

    // int i=0,temp=0, res=0;
    // while(n>0)
    // {
    //     temp=n%10;
    //     n=n/10;
    //     // int a=2^i;
    //     // cout << i << " "<< a<< endl;
    //     res+=temp*(pow(2, i));
    //     i++;
    // }
    // cout << res << endl;
}

void binToOct(string n)
{
    int res=0,base=1;
    for(int i=n.size()-1;i>=0;i--)
    {
        if(n[i]=='1') {
            res+=base;
        }
        base*=2; 
        
    }

    int temp=0,oct=0,i=1;
    while(res>0)
    {
        oct+=(res%8)*i;
        res/=8;
        i*=10;
    }
    
    cout << oct << endl;

}

int main()
{
    string n = "1100110";
    // binToDec(n);
    binToOct(n);
    return 0;
}