#include <bits/stdc++.h>

using namespace std;


int main()
{
    string ch="takeuforward";


    int letter[255]={0};
    int maxFreq=0;
    char res;

    for(int i=0;i<ch.size();i++)
    {
        letter[ch[i]]++;
        if(letter[ch[i]]>maxFreq) {
            maxFreq=letter[ch[i]];
            res=ch[i];
        }
    }

    cout << maxFreq << " " << res << endl;
    
    return 0;
}