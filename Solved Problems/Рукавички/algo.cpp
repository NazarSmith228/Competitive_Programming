#include <iostream>
using namespace std;
int main()
{
     int n,k;
     cin >> n >> k;
     int num = 0,per = 0;
     if( k <= n){
          cout << "1" << " " << k;
     } else{
          if(k % n == 0){
               num = k / n;
               cout <<  num << " " << k / num;
          } else{
               num = (k / n) + 1;
               if((k - n) > n){
                    per = k - ((k/n)*n);
                    if(per > n){
                         per = k -((k/n)*2);
                         cout << num << " " << per;
                    } else {
                         cout << num << " " << per;
                    }
               }else{
                    cout << num << " " << k - n;
               }
          }
     }
     return  0;
}
