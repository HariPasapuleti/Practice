#include <bits/stdc++.h>

using namespace std;


void sort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1]){
                arr[j]=arr[j]^arr[j+1];
                arr[j+1]=arr[j]^arr[j+1];
                arr[j]=arr[j]^arr[j+1];
            }
        }
    }
}


int main()
{
    int arr[] = {4, 2, 8, 6, 15, 5, 9, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, n);
    for(int i=0;i<n/2;i++)
    {
        cout<<arr[i]<<" ";
    }
    for(int i=n-1;i>=n/2;i--)
    {
        cout<<arr[i]<<" ";
    }
    cout << endl;
    return 0;
}