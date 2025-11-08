#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n=6;
    int arr[n] = {10,5,10,15,10,5};
    unordered_map<int, int> hashMap;
    for(int num : arr){
        hashMap[num]++;
    }

    for(auto num:hashMap){
        cout<<num.first << " "<<num.second << endl;
    }
}