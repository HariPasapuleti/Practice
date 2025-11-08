#include <bits/stdc++.h>

using namespace std;


int blockSwap(int arr[],int n, int k)
{
    k=k%n;

    for(int i=k;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    for(int i=0;i<k;i++)
    {
        cout<<arr[i]<<" ";
    }
    

}


int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]),k=2;
    blockSwap(arr,n,k);
    return 0;
}