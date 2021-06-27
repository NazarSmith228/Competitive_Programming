#include <iostream>
#include <math.h>
#include <vector>
#include <iomanip>

using namespace std;
int main() {
    double x1,y1,r1,x2,y2,r2;
    cin >> x1 >> y1 >> r1;
    cin >> x2 >> y2 >> r2;
    double S = 0,S1 = 0,S2 = 0;
    double F1 = 0,F2 = 0;
    double f1 = 0, f2 = 0;
    double  d = 0;
    d = sqrt(fabs(pow((x2 - x1), 2)) + fabs(pow((y2 - y1), 2)));
 if(d == 0){
        double first = M_PI * pow(r1,2);
        double second = M_PI * pow(r2,2);
        if(first != second)
        cout << fixed << setprecision(8) << min(first,second) << endl;
        else cout << fixed << setprecision(8) << first << endl;
    } 
else if(d > 0){
        F1 = (pow(r1, 2) - pow(r2, 2) + pow(d, 2)) / (2 * r1 * d);
        F2 = (pow(r2, 2) - pow(r1, 2) + pow(d, 2)) / (2 * r2 * d);
        if((F1 < 1 && F1 >= -1 )||(F2 < 1 && F2 >= -1)) {
            f1 = 2 * acos(F1);
            f2 = 2 * acos(F2);
            S1 = (0.5*f2*pow(r2,2)) - (0.5*pow(r2,2)*sin(f2));
            S2 = (0.5*f1*pow(r1,2)) - (0.5*pow(r1,2)*sin(f1));
            S = S1 + S2;
            cout << fixed << setprecision(8) << S << endl;
        } else if(F1 == 1 && F2 == 1){
            cout << 0 << endl;
        }
        else if(F1 < -1 || F2 < -1){
            double first = M_PI * pow(r1,2);
            double second = M_PI * pow(r2,2);
            cout << fixed << setprecision(8) << min(first,second) << endl;
        } else cout << 0 << endl;
    } else  cout << 0 << endl;
    return 0;
}




