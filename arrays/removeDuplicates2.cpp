#include <bits/stdc++.h>

using namespace std;


void duplicates(int arr[], int n)
{
    map<int, int> mp;
    for(int i=0;i<n;i++)
    {
        if(mp.find(arr[i])==mp.end()){
            cout << arr[i] << " ";
            mp[arr[i]] = 1;
        }
    }

}




int main()
{
    int arr[] = {4, 2, 8, 6, 15, 5, 9, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    duplicates(arr, n);
    return 0;
}