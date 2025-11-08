#include <bits/stdc++.h>

using namespace std;


void addFirst(int *arr, int n, int k) 
{
    // cout << n << endl;
    for(int i=n-1;i<=0;i++)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=k;
}

void addLast(int *arr, int n, int k)
{
    // cout << n << endl;
    arr[n]=k;
    // cout << arr[n] << endl;
}

void addMiddle(int *arr, int n, int k, int p)
{
    // cout << n << endl;
    for(int i=n;i>=p;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[p-1]=k;
}




int main()
{
    
    int arr[] = {4, 2, 8, 6, 15, 5, 9, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    // addFirst(arr, n,6);
    addLast(arr,n,1);
    // addMiddle(arr,n,8,4);
    for(int i=0;i<=sizeof(arr)/sizeof(arr[0]);i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}