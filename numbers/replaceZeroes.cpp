#include <bits/stdc++.h>

using namespace std;

void replace(int n)
{
    int ans=0,temp=1;
    while(n>0)
    {
        if(n%10==0) {
            ans=temp+ans;
        }
        else {
            ans=(n%10)*temp + ans;
        }
        // cout << ans << " ";
        temp*=10;
        n/=10;
    }
    cout << ans<<endl;
}


int main()
{
    int n=1002201;
    replace(n);
    return 0;
}