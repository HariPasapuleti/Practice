#include <bits/stdc++.h>

using namespace std;

void roots(int a, int b, int c)
{
    int d= b*b-4*a*c;

    if(d>0) {
        cout << "Two distinct real roots" << endl;
        double root1=double((-b+sqrt(b*b-4*a*c))/(2*a));
        double root2=double((-b-sqrt(b*b-4*a*c))/(2*a));
        cout << root1 << " and " << root2 << endl;
    }
    else if(d==0){
        cout << "Two equal real roots" << endl;
        double root=double(-b/2*a);
        cout << root << " and " << root << endl;
    }
    else {
        cout << "No real roots" << endl;    
        cout << (double)(-b/2*a) << " - i" << sqrt(abs(d)) << " and " << (double)(-b/2*a) << " + i" << sqrt(abs(d)) << endl;;
    }
}



int main()
{
    int a=67,b=-8,c=10;
    roots(a,b,c);
    return 0;
}