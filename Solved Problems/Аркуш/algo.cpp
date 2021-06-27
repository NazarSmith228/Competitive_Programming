#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    if(N == 0) {
        cout << "0" << endl;
        return 0;
    }
    else if(N == 1) {
        cout << "1" << endl;
        return 0;
    }
    else if(N < 0)
        return 0;
    long long counter;
    counter = (long long)(pow(N, 2) + 1);
    N--;
    long long adder = 2;
    while (N >= 2){
        counter += (long long)(pow(adder,2));
        adder++;
        N--;
    }
    cout << counter << endl;
    return 0;
}
