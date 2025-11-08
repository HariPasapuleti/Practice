#include <bits/stdc++.h>

using namespace std;

void symmentric(int arr[][2], int n)
{
    unordered_map<int, int> hashMap;
    for(int i=0;i<n;i++)
    {
        int first = arr[i][0];
        int second = arr[i][1];

        if(hashMap.find(second)!=hashMap.end() && hashMap[second]==first) {
            cout << "(" << first << "," << second << ")" << " ";
        }
        else {
            hashMap[first]=second;
        }
    }
}


int main()
{
    int arr[][2] = {{4, 2}, {8, 6}, {15, 5}, {9, 20}, {6, 8}, {5, 15}};
    int n = sizeof(arr) / sizeof(arr[0]);
    symmentric(arr, n);
    return 0;
}