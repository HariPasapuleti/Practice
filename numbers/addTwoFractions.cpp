#include <bits/stdc++.h>

using namespace std;


int gcd(int a, int b)
{
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

void fraction(string s)
{
    int count=0, den1=0,den2=0,num1=0,num2=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='/') {
            if(count==0) {
                num1=s[i-1]-'0';
                den1=s[i+1]-'0';
                count++;
            }
            else {
                num2=s[i-1]-'0';
                den2=s[i+1]-'0';
            }
        }
    }

    int den = (den1*den2)/gcd(den1, den2);
    int num = (num1*(den/den1)+num2*(den/den2));
    int _gcd=gcd(num,den);
    num/=_gcd;
    den/=_gcd;
    cout << num << "/" << den << endl;
}


int main()
{
    string s = "5/2 + 1/2";
    fraction(s);
    return 0;
}