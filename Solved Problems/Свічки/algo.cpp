#include <iostream>
#include <iomanip>

using namespace std;
int count_c(long double A[], int length, long double mid) {
    int count = 0;
    for (int i = 0; i < length; i++) {
        count += (int)(A[i] / mid);
    }
    return count;
}
int main() {
    int N, M;
    cin >> M >> N;
    long double A[N];

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    long double left = 0.0, right = 100.0, mid;
    while (right - left > 0.00000001) {
        mid = left + (right - left) / 2;
        int count = count_c(A, N, mid);
        if (count >= M) {
            left = mid;
        }
        else {
            right = mid;
        }
    }
    cout << fixed << setprecision(7) << right;
    return 0;
}
