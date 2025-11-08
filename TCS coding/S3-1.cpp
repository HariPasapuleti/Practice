#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h, m;
    h=34;
    m=40;

    int total_time = 24*60;
    int curr_time = h*60+m;

    int res = total_time-curr_time;

    int res_h = res/60;
    int res_m = res%60;
    if(res < 0) {
        cout << res_h << "::" << abs(res_m) << endl;
        return 0;
    }

    cout << res_h << "::" << res_m << endl;
    return 0;


}