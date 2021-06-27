#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int maxNegative = -10001, minNegative = 0, maxPositive = 0, minPositive = 10001, buffer, negativeCount = 0;
    bool zero = false, zeroPlus = false;
    for (int i = 0; i < n; ++i) {
        cin >> buffer;
        if (buffer == 0) {
            if (zero) {
                zeroPlus = true;
            }
            zero = true;
        }
        else if (buffer > 0) {
            minPositive = min(minPositive, buffer);
            maxPositive = max(maxPositive, buffer);
        }
        else {
            minNegative = min(minNegative, buffer);
            maxNegative = max(maxNegative, buffer);
            negativeCount++;
        }
    }
    if (zero) {
        if (zeroPlus) {
            if (negativeCount > 0)
                cout << minNegative;
            else
                cout << 0;
        }
        else {
            if (negativeCount % 2 == 0) {
                cout << 0;
            } else {
                cout << minNegative;
            }
        }
    }
    else if (negativeCount % 2 == 0 && minPositive == 10001) {
        cout << minNegative;
    }
    else if (negativeCount % 2 == 0) {
        cout << minPositive;
    }
    else {
        cout << maxNegative;
    }
    return 0;
}
