
#include <iostream>
using namespace std;
int main() {
    int n , mean, max, min;
    cin >> n >> max >> min >> mean;
    if(n == 1){
        if(max == min && min == mean && max == mean){
            cout << mean ;
        } else{
            cout << "Impossible";
            return 0;
        }
    }
    else if(n == 2){
        if( (min + max) / 2 == mean) {
            cout << min << " " << max;
        } else{
            cout << "Impossible";
            return 0;
        }
    } else {
        long av = (long)((n * mean) - min - max);
        if (av/(n-2) < min || av/(n-2) > max){
            cout << "Impossible";
            return 0;
        }
        for(int i = 2; i < n; i++){
            cout << av/(n-i) << " ";
            av -= av/(n-i);
        }
        cout << max << " " << min;
    }
    return 0;
}


