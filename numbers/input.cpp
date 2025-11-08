#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<float> f;
    vector<string> s;
    vector<int> i;
    string input_data="3.14,hello,42;7.89,hack,9;9.23,jack,77";

    stringstream ss(input_data);
    string entry;

    while(getline(ss,entry,';'))
    {
        stringstream entryStream(entry);
        string fo,so,io;

        getline(entryStream,fo,',');
        f.push_back(stof(fo));

        getline(entryStream,so,',');
        s.push_back(so);

        getline(entryStream,io,',');
        i.push_back(stoi(io));

    }

    for(int j=0;j<f.size();j++)
    {
        cout<<f[j]<<" "<<s[j]<<" "<<i[j]<<endl;
    }

}