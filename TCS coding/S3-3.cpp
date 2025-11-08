#include <bits/stdc++.h>

using namespace std;

int main()
{
    // string n = "aaabcddaakk";
    string n = "aaabbaccccdd";
    int count =1,res=0;
    for(int i=1;i<n.size();i++)
    {
        if(n[i] == n[i-1]) {
            count++;
        }
        else {
            if(count%2==0) res += count;
            count=1;
        }
    }
    if(count%2==0) res += count;
    
    cout << res << endl;
    return 0;
    
}