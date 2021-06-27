#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double  a,b,c,r;
    cin >> a >> b >> c >> r;
    double p = (a + b + c) / 2;
    double s = sqrt(p*(p-a)*(p-b)*(p-c));
    double R1 = (a*b*c)/(4.*s);
    double r1 = (2.*s)/(a+b+c);
    if(r >=R1){
        cout << "+";
    } else{
        cout << "-";
    }
    if(r <=r1){
        cout << "+";
    } else{
        cout << "-";
    }
    return  0;
}

