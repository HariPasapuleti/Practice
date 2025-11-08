#include <bits/stdc++.h>
using namespace std;


int steps(int dest, int start, int step)
{
    if(dest < start) return 0;
    if(dest == start) return 1;
    int sum=0;
    for(int i=1;i<=step;i++) {
        sum += steps(dest-i,start,step);
        
    }
    return sum;
}

int main()
{

    int res=steps(16,11,3);
    cout << res << endl;
}