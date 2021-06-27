#include <bits/stdc++.h>
using namespace std;
double factorial(double a){
    if(a < 0)return  0;
    if(a == 0)return 1;
    else return a * factorial(a-1);
}
int main(){
    double m,n,i,j;
    cin >> m >> n >> i >> j;
    double probability = 0;
    probability = (factorial(n) / (factorial(j) * factorial(n-j)) *
            pow((1/m),j) * pow((1 - (1/m)),n-j));
    cout << fixed << setprecision(4) << probability*100;
    return 0;
}
