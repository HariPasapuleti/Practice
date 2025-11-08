#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int arr[8] = {18,98,3,33,12,22,21,11};

    int i=0,j=sizeof(arr)/sizeof(arr[0])-1;
    while(i<j)
    {
        
        while(arr[i]%2==0) i++;
        while(arr[j]%2!=0) j--;
        // swap(arr[i],arr[j]);
        arr[i] = arr[i]^arr[j];
        arr[j] = arr[i]^arr[j];
        arr[i] = arr[i]^arr[j];
        i++;
        j--;
    }
    for(int i=0;i<8;i++)
    {
        cout << arr[i] << " ";
    }
}