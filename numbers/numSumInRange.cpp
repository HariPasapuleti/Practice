#include <bits/stdc++.h>

using namespace std;

void sumRange(int start, int end)
{
    cout << end*(end-1)/2 - start*(start-1)/2 << endl;
}


int main()
{
    int start=6, end=10;
    sumRange(start,end+1);
    return 0;
}