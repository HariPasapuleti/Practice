#include <bits/stdc++.h>

using namespace std;


void rev(string s)
{
    char temp;
    int n=s.length();
    for(int i=0;i<s.size()/2;i++)
    {
        s[i]=char(int(s[i])^int(s[n-i-1]));
        s[n-i-1]=char(int(s[i])^int(s[n-i-1]));
        s[i]=char(int(s[i])^int(s[n-i-1]));
        // temp=s[i];
        // s[i]=s[s.size()-i-1];
        // s[s.size()-i-1]=temp;
    }

    cout << s << endl;
}



int main()
{
    string s ="Backward";
    rev(s);
    return 0;
}