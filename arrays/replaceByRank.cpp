#include <bits/stdc++.h>

using namespace std;

void rearrange1(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        int rank=1;
        for(int j=0;j<n;j++)
        {
            if(arr[i]>arr[j]) {
                rank++;
            }
        }
        cout << rank << " ";
    }
}

void rearrange(int arr[], int n)
{
    
}


int main()
{
    int arr[] = {4, 2, 8, 6, 15, 5,5, 9, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr,n);
    return 0;
}