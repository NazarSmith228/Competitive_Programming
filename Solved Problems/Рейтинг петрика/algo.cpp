#include <iostream>
using namespace std;
int main()
{
    long  x,y,z;
    cin >> x >> y >> z;
    long sum = 0;
    sum = x + y;
    if( (x - y) > z)
        cout << "-1" << endl;
     else if(sum <= z)
        cout << sum << endl;
     else {
        while (sum > z) {
            sum--;
        }
        cout << sum << endl;
    }
    return 0;
}
