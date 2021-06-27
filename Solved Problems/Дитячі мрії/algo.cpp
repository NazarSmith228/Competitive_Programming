#include <iostream>
using namespace std;
//int div(double arr[],int len, double mid){
//    int count = 0;
//    for(int i = 0; i < len;i++){
//        count += (int)(arr[i]/mid);
//    }
//    return count;
//}
int main() {
    long long n,k;
    cin >> n >> k;
    long long res = 1;
    for(int i = 0; i < k; i++) {
        if (res < 1000000000) {
            res *= n;
        } else{
            cout << "-1";
            return 0;
        }
    }
    if(res <= 1000000000)
    cout << res;
    else cout << "-1";
    return 0;
}
