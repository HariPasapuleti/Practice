#include <bits/stdc++.h>

using namespace std;

bool sortel(pair<int,int> a , pair<int,int> b)
{
    if(a.second == b.second){
        return a.first<b.first;
    }
    return a.second>b.second;
}

void freq(int arr[], int n)
{
    unordered_map<int, int> mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }

    vector<pair<int,int>> vec;
    for(auto map:mp)
    {
        vec.push_back({map.first, map.second});
    }

    sort(vec.begin(), vec.end(), sortel);
    for(int i=0;i<vec.size();i++)
    {
        int k=vec[i].second;
        while(k--)
        {
            cout << vec[i].first << " ";
        }
    }
    cout << endl;
}




int main()
{
    int arr[] = {1,2,3,2,4,3,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    freq(arr,n);
    return 0;
}