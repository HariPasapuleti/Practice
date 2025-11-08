#include <bits/stdc++.h>
using namespace std;

int main()
{
    int queue_size = 3;
    // cin >> queue_size;

    vector<int> q;
    q.push_back(60);
    q.push_back(30);
    q.push_back(60);

    // int change = 0;
    unordered_map <int, int> change;
    for(int i=0;i<queue_size;i++)
    {
        if(q[i]==60) {
            if(change[30] > 0) {
                change[30]--;
                // cout << change[q[i]] << " ";
            }
            else {
                cout << "Tranaction fail" << endl;
                return 0;
            }
        }
        else if(q[i]==120) {
            if(change[30] > 0 && change[60] > 0) {
                change[30]--;
                change[60]--;
                // cout << change[q[i]] << " ";
            }
            else {
                cout << "Tranaction fail" << endl;
                return 0;
            }
        }
        change[q[i]]++;
        
    }
    cout << "Tranaction Succesfull" << endl;
    return 0;


    // for(int i=0;i<queue_size;i++)
    // {
    //     int temp;
    //     cin >> temp;
    //     q.push_back(temp);
    // }
}