#include <iostream>
using namespace std;
int main() {
    string d;
    cin >> d;
    long n;
    cin >> n;
    int days [7];
    long m = n % 7;
    int first;
    if(d == "Monday"){
        first = 1;
    } else if( d == "Tuesday"){
        first = 2;
    } else if(d == "Wednesday"){
        first = 3;
    } else if(d == "Thursday"){
        first = 4;
    } else if(d == "Friday"){
        first = 5;
    } else if(d == "Saturday"){
        first = 6;
    } else if(d == "Sunday"){
        first = 7;
    } else{
        return  0;
    }
    for( int i = 0; i < 7; i++){
        days[i] = n / 7;
    }
    for(int j = 0; j < m; j++){
        if( first < 7){
            days[first - 1]++;
            first++;
        } else{
            days [first - 1]++;
            first = 1;
        }
    }
    for(int k = 0; k < 7; k++){
        cout << days[k] << " ";
    }
    return 0;
}
