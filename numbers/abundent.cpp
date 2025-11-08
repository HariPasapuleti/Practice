#include <bits/stdc++.h>

using namespace std;

void abundent(int n)
{
    int sum=0;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if(i==1){
                sum+=i;
            }
            else{
                sum+=i;
                sum+=n/i;
            }
        }
    }
    cout << sum << endl;
    if(sum>n) cout << "Yes" << endl;
    else cout << "No" << endl;
}



int main()
{
    int n=36;
    abundent(n);
    return 0;
}