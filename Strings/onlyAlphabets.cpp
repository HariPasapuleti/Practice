

#include <bits/stdc++.h>

using namespace std;

void onlyAlphabets(string s)
{
    string alpha="abcdefghijklmnopqrstuvwxyz";
    int count=0;
    for(int i=0;s[i];i++)
    {
        if(alpha.find(s[i])!=string::npos){
            s[count]=s[i];
            count++;
        }
    }
    cout << s << endl;
    for(int i=count;i<s.size();i++)
    {
        s[i]='\0';
    }
    
    cout << s << endl;
    
    
}


int main()
{
    string s="take12% *&u ^$#forward";
    onlyAlphabets(s);
    return 0;
}