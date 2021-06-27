#include <iostream>
#include <iomanip>

using namespace std;

int PossibleTies(long ties[], int length, double size) {
    int counter = 0;
    for(int i=0; i<length; i++){
        counter+=(int)(ties[i]/size);
    }
    return counter;
}

int main() {
    int tieCount, deputyCount;
    cin >> tieCount >> deputyCount;
    long ties[tieCount];
    for (int i = 0; i < tieCount; ++i) {
        cin >> ties[i];
    }
    double left = 0, right = 1000000000, mid;
    bool ok = false;
    while (right-left>0.00001) {
        mid=left+(right-left)/2;
        int possibleTies = PossibleTies(ties, tieCount, mid);
        if (possibleTies == deputyCount) {
            ok = true;
            left = mid;
        }
        else if (possibleTies > deputyCount)
            left = mid;
        else
            right = mid;
    }
    cout << fixed << setprecision(4) << mid;
    return 0;
}
