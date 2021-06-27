#include <iostream>
#include <math.h>
#include <vector>
#include <iomanip>
#include <cstring>
using namespace std;
int main(){
    double x,y,x1,y1,x2,y2;
    cin >> x >> y >> x1 >> y1 >> x2 >> y2;
    long double temporary = (((x-x1)*(x2-x1)) + ((y-y1)*(y2-y1)))/(pow(x2-x1,2) + (pow(y2-y1,2)));
    if(temporary < 0) temporary = 0;
    else if(temporary > 1) temporary = 1;
    long double l = sqrt(pow((x1-x)+(temporary*(x2-x1)),2) + pow((y1-y)+(temporary*(y2-y1)),2));
    cout << l << endl;
    return 0;
}
