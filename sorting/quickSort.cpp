#include <bits/stdc++.h>
using namespace std;

int partition(int low, int high, vector<int>& vec) {

    int pivot=low;
    int i=low, j=high;
    while(i<j) {
        while(vec[i]<=vec[pivot] && i<high) i++;
        while(vec[j]>vec[pivot] && j>low) j--;
        if(i<j) swap(vec[i], vec[j]);
    }
    swap(vec[j], vec[pivot]);
    return j;
}

int quickSort(int low, int high, vector<int>& vec) {

    if(low<high) {
        int partitionIndex = partition(low,high,vec);
        quickSort(low, partitionIndex-1, vec);
        quickSort(partitionIndex+1, high, vec);
    }
}

int main() {
    int n=5;
    vector<int> vec{4,1,7,3,2};
    quickSort(0,n-1,vec);
    for(int i=0;i<n;i++) {
        cout<<vec[i]<<" ";
    }
    return 0;
}