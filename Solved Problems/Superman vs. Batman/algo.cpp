#include <iostream>
using namespace std;
int main(){
   int n;
   cin >> n;
   int superman = 0,batman = 0;
   int a,b,c;
   for(int i = 0; i < n; i++){
       cin >> a >> b >> c;
       int res1 = a ^ b;
       int res2 = res1 ^ c;
       if(res2 == 0)batman++;
       else superman++;
   }
   cout << superman << "-" << batman;
    return 0;
}

