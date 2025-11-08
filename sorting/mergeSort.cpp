#include <bits/stdc++.h>
using namespace std;

void merge(int low,int mid, int high, vector<int>& vec) {

    int left=low, right=mid+1;
    vector<int> temp;
    while(left<=mid && right<=high) {
        if(vec[left] <= vec[right]) { 
            temp.push_back(vec[left]);
            left++;
        }
        else {
            temp.push_back(vec[right]);
            right++;
        }
    }
    while(left<=mid) {
        temp.push_back(vec[left]);
        left++;
    }
    while(right<=high) {
        temp.push_back(vec[right]);
        right++;
    }

    for(int i=0;i<temp.size();i++)  {
        vec[low+i]=temp[i];
    }
}

void mergeSort(int low, int high, vector<int>& vec) {
    if(low>=high) return;
    int mid=low+(high-low)/2;
    mergeSort(low,mid,vec);
    mergeSort(mid+1,high,vec);
    merge(low,mid,high,vec);
}

int main() {
    int n=5;
    vector<int> vec{4,1,7,3,2};
    mergeSort(0,n-1,vec);
    for(int i=0;i<n;i++) {
        cout<<vec[i]<<" ";
    }
    return 0;
}