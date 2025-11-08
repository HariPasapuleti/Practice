#include <bits/stdc++.h>

using namespace std;

bool palindrome(string s)
{
    for(int i=0;i<s.size()/2;i++)
    {
        if(s[i]!=s[s.size()-i-1]) {
            cout << i << " ";
            return false;
        }
    }
    return true;
}


int main()
{
    string s="abcdcba";
    if(palindrome(s)) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    
    return 0;
}