#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n=9;
    int arr[n]={2,5,1,3,6,90,70,0,-1};
    int large1=0,small1=INT_MAX;
    int large2=0,small2=INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(arr[i] >= large2) {
            if(arr[i]>large1){
                large2=large1;
                large1=arr[i];
            }
            else {
                large2 = arr[i];
            } 
        }
        if(arr[i] <= small2) {
            if(arr[i]<small1){
                small2=small1;
                small1=arr[i];
                
            }
            else {
                small2 = arr[i];
            } 
        }
    }
    cout << small2 << " "<<large2<<endl;;
}