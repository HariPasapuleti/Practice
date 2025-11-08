#include <bits/stdc++.h>
using namespace std;

int main()
{
    float n=5,m=4,k=3;
    float t=(n*m)/k;

    // if((m+n)>t || (m+k)>t || (n+k)>t) {
    //     cout << "YES" << endl;
    // }
    // else {
    //     cout << "NO" << endl;
    // }

    if((1/2)*m*n ==t || (1/2)*k*n ==t || (1/2)*m*k ==t) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}