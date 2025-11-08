#include <bits/stdc++.h>

using namespace std;

void repeated(int arr[], int n)
{
    unordered_map<int,int> hashMap;
    for(int i=0;i<n;i++)
    {
        hashMap[arr[i]]++;
    }

    for(auto num:hashMap)
    {
        if(num.second >1){
            cout << num.first << " ";
        }
    }
    cout << endl;
}


int main()
{
    int arr[] = {4, 2, 8,7,5,15, 6, 15, 5, 9, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    repeated(arr,n);
    return 0;
}