#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n=9;
    int arr[n]={2,-5,1,3,-6,90,70,0,-1};

    for(int i=0;i<n/2;i++)
    {
        arr[i]=arr[i]^arr[n-i-1];
        arr[n-i-1]=arr[i]^arr[n-i-1];
        arr[i]=arr[i]^arr[n-i-1];
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}