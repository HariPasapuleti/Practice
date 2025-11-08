#include <bits/stdc++.h>
using namespace std;

int main() {

    ofstream outFile("example.txt");
    if(outFile.is_open()) {
        outFile << "Hey, you are in exmaple file" << endl;
        outFile << "Good luck" << endl;
        outFile.close();
    }

    ifstream inFile("example.txt");
    string line;
    if(inFile.is_open()) {
        while(getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    }

}