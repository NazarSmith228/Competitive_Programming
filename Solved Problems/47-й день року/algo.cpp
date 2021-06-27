#include <iostream>
using namespace std;
int main() {
    int y;
    cin >> y;
    if(y < 1900 || y > 2100){
        return 0;
    }
    cout << "16.02." << y << endl;
    
    return 0;
}
