#include <iostream>
#include <stack>
using namespace std;
int main() {
     int n;
     cin >> n;
     long arr[n];
     stack<long>stack;
     for(int i = 0; i < n; i++){
          cin >> arr[i];
     }
     long temp = arr[n-1];
     stack.push(temp);
     for(int i = n-2; i >= 0; i--) {
          if(arr[i] > temp){
               temp = arr[i];
               stack.push(temp);
          }
     }
     cout << stack.size() << endl;
     while (!stack.empty()){
          cout << stack.top() << " ";
          stack.pop();
     }
     return 0;
}
