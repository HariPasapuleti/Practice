
#include <bits/stdc++.h>

using namespace std;

void repeatedFreq(string str)
{
    // cout << "Running"<< endl;
    int j=0;
    string res="-1";
    int letter[256]={0};
    int tempMaxFreq=0, maxFreq=0;

    for(int i=0;i<str.size();i++)
    {
        letter[str[i]]++;
        tempMaxFreq=max(tempMaxFreq,letter[str[i]]);

        if(str[i]==' '){
            // cout << tempMaxFreq << endl;
            if(tempMaxFreq>maxFreq) {
                maxFreq=tempMaxFreq;
                res=str.substr(j,i-j);
                // cout << res << endl;
            }
            fill(letter, letter+256, 0);
            tempMaxFreq=0;
            j=i+1;
        }
        // cout << res << endl;
    }
    if(tempMaxFreq>maxFreq) {
        res=str.substr(j,str.size()-1);
    }
    cout << res << endl;
}


int main()
{
    string str = "cameron blue";
    repeatedFreq(str);
    return 0;
}