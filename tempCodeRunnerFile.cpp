ifstream inFile("example.txt");
    string line;
    if(inFile.is_open()) {
        while(getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    }