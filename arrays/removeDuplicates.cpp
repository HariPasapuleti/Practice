#include <bits/stdc++.h>

using namespace std;

int duplicates(int arr[], int n) 
{
    // int arr1[n], k=0;
    // for(int i=1;i<n;i++)
    // {
    //     if(arr[i]!=arr[i-1]) {
    //         arr1[k]=arr[i-1];
    //         cout << arr1[k] << " ";
    //         k++;
    //     }
    // }
    // arr1[k]=arr[n-1];
    // cout << arr1[k];

    int k=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[i+1]){
            arr[k]=arr[i];
            k++;
        }
    }
    for(int i=0;i<k;i++)
    {
        cout << arr[i] << " ";
    }
}


int main()
{
    int arr[] = {4, 5, 9, 20, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    duplicates(arr, n);
    return 0;
}