#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[8]={3,4,-7,1,3,3,1,-4};
    int target=7, maxSum=0;
    vector<vector<int>> res;

    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        int sum=0,flag=0;
        vector<int> temp;
        for(int j=i;j<sizeof(arr)/sizeof(arr[0]);j++)
        {
            sum+=arr[j];
            temp.push_back(arr[j]);
            if(sum==target) {
                res.push_back(temp);
            }
            
        }
    }

    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++)
        {
            cout<<res[i][j] << " ";
        }
        cout<<endl;
    }
}