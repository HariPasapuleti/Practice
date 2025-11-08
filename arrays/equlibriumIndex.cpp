

#include <bits/stdc++.h>

using namespace std;

void equilibrium(int arr[], int n)
{
    int sum=0, pref=0, suff=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }

    for(int i=1;i<n;i++)
    {
        pref+=arr[i-1];
        suff=sum-pref-arr[i];
        if(pref==suff){
            cout << i<<endl;
        }
    }
}


int main()
{
    int arr[] = {1,-1,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    equilibrium(arr, n);
    return 0;
}