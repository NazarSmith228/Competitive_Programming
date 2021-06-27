#include <iostream>
#include <math.h>
#include <set>
using namespace std;
int main() {
    int xz,yz;
    cin >> xz >> yz;
    int xc,yc;
    cin >> xc >> yc;
    int n,x,y;
    cin >> n;
    double arr[n];
    double max = - 1;
    double main = sqrt(pow((xz-xc),2) + pow((yz-yc),2));
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        double temp = sqrt(pow((x-xc),2) + pow((y-yc),2));
        arr[i] = temp;
    }
    for(int i = 0; i < n; i++){
        if(max < arr[i])max = arr[i];
    }
    if(max >= main)cout << "YES";
    else cout << "NO";
    return 0;
}

