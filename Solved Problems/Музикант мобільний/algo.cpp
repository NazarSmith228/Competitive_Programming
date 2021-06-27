#include <iostream>
using namespace std;
int main() {
     long n;
     cin >> n;
     long count = 11;
     long res = 0;
     if( n % 60 == 0){
          res = n / 60;
          if(res <= 7){
               count += res*9;
          } else{
               count += 7*9;
               count += (res-7)*5;
          }
     } else{
          res = n / 60;
          if(res <= 7){
               count += 9;
               count += res*9;
          } else{
               count += 5;
               count += 7*9;
               count += (res-7)*5;
          }

     }
     cout << count;
     return 0;
}
