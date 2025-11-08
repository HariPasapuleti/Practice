
#include <bits/stdc++.h>

using namespace std;

void change(string s)
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]-'a'>=0 && s[i]-'a'<26)
        {
            s[i]=char(int(s[i])-32);
        }
        else if(s[i]-'A'>=0 && s[i]-'A'<26) {
            s[i]=char(int(s[i])+32);
        }
    }
    cout << s << endl;
}





int main()
{
    string s="take u forward IS Awesome";
    change(s);
    return 0;
}