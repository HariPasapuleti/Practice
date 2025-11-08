#include <bits/stdc++.h>

using namespace std;

void palindrone(int min, int max)
{
    for(int i=min;i<=max;i++)
    {
        int k=i;
        int rev=0;
        while(k>0)
        {
            rev=(rev*10)+k%10;
            k/=10;
        }
        if(i==rev) cout << i << " ";
    }
}


int main()
{
    int min=10,max=50;
    palindrone(min,max);
    return 0;
}