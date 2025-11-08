
#include <bits/stdc++.h>

using namespace std;

void subsetArray(int arr1[], int arr2[],int n1,int n2)
{
    sort(arr1, arr1 + n1);
    sort(arr2, arr2+n2);
    int flag=1;
    for(int i=0;i<n2;i++)
    {
        if(arr2[i]==arr1[0]) {
            int k=i;
            flag=1;
            for(int j=0;j<n1;j++)
            {
                if(arr2[i]!=arr1[i] || k == n2) {
                    flag=0;
                    break;
                }
                k++;
            }
            if(flag==1) {
                cout << "Yes" << endl;
                break;
            }
        }
    }
    if(flag==0) cout << "No" << endl;
}


int main()
{
    int arr1[] = {1,3,4,5,2}, arr2[]={2,4,3,1,7,5,15};

    int n1 = sizeof(arr1) / sizeof(arr1[0]) , n2 = sizeof(arr2) / sizeof(arr2[0]);
    subsetArray(arr1,arr2,n1,n2);
    return 0;
}