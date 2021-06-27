#include <iostream>
#include <math.h>
#include <vector>
#include <iomanip>
#include <cstring>
using namespace std; 
int main(){
        long n;
        cin >> n;
        int count = 1;
        while(n > 1){
            n/=2;
            count++;
        }
        while((int)(pow(2,count))-1 < n)count++;
        cout << count;
        return 0;
    }
