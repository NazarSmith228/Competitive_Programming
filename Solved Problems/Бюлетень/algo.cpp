#include <iostream>
using namespace std;
int main() {
     int n;
     cin >> n;
     string arr[3*n];
     for(int i = 0; i < 3*n; i++){
         cin >> arr[i];
     }
     string main;
     cin >> main;
     for(int i = 2; i < 3*n; i+=3){
         if(arr[i] == main){
                cout << "[/] " << arr[i] << endl;
         } else{
             cout << "[ ] " << arr[i] << endl;
         }
     }
     return 0;
}

