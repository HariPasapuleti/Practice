

#include <bits/stdc++.h>

using namespace std;

void count(string s)
{
    int space=0,vowels=0,consonent=0;
    for(int i=0;i<s.size();i++)
    {
        string vowelSet="aeiouAEIOU";
        if(s[i]==' ') {
            space++;
        }
        // else if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') {
        //     vowels++;
        // }
        else if(vowelSet.find(s[i])!=string::npos){
            vowels++;
        }
        else{
            consonent++;
        }
    }
    cout << space << " "<< vowels << " "<<consonent;
}


int main()
{
    string s="Take u forward is Awesome";
    count(s);
    return 0;
}