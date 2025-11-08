
#include <bits/stdc++.h>

using namespace std;

void removeDuplicate(string s)
{
    int letter[256]={0}, count=0;
    for(int i=0;i<s.size();i++)
    {
        letter[s[i]]++;
        if(letter[s[i]]==1) {
            s[count]=s[i];
            count++;
        }
    }
    s.resize(count);
    cout << s << endl;
}


int main()
{
    string str="cbacdcbc";
    removeDuplicate(str);
    return 0;
}