#include <iostream>
using namespace std;

int diomandShape(int input)
{
    int space = input - 1;

    for(int i = 0; i < input; i++)
    {
        for(int j = 0; j < input; j++)
        {
            if(j < space) {
                cout << " ";
            }
            else if(j == space) {
                cout << "*";
            }
            else {
                cout << " ";
                cout << "*";
            }
        }
        cout << endl;
        space--;
    }

    space = 0;

    for(int i = 0; i < input; i++)
    {
        for(int j = 0; j < input; j++)
        {
            if(j < space) {
                cout << " ";
            }
            else if(j == space) {
                cout << "*";
            }
            else {
                cout << " ";
                cout << "*";
            }
        }
        cout << endl;
        space++;
    }

}

int main() 
{

    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    diomandShape(n);

}