#include <iostream>
using namespace std;
int main() {
     int n,m;
     cin >> n >> m;
     if((n*m) % 2 != 0){
          cout << "-1";
          return 0;
     }
     if(m == 1){
          for(int i = 0; i < n; i++){
               if(i<=1){
                    cout << 'A';
               }
               if(i > 1 && i <= 3){
                    cout << 'B';
               }
               if(i > 3 && i <= 5){
                    cout << 'C';
               }
               cout << endl;
          }
     } else {
          if (m % 2 == 0) {
               for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                         if (i == 0 && j <= 1) {
                              cout << 'A';
                         }
                         if (i == 0 && j > 1 && j <= 3) {
                              cout << 'B';
                         }
                         if (i == 0 && j > 3 && j <= 5) {
                              cout << 'C';
                         }
                         if (i == 1 && j <= 1) {
                              cout << 'E';
                         }
                         if (i == 1 && j > 1 && j <= 3) {
                              cout << 'F';
                         }
                         if (i == 1 && j > 3 && j <= 5) {
                              cout << 'G';
                         }
                         if (i == 2 && j <= 1) {
                              cout << 'H';
                         }
                         if (i == 2 && j > 1 && j <= 3) {
                              cout << 'I';
                         }
                         if (i == 2 && j > 3 && j <= 5) {
                              cout << 'J';
                         }
                         if (i == 3 && j <= 1) {
                              cout << 'K';
                         }
                         if (i == 3 && j > 1 && j <= 3) {
                              cout << 'L';
                         }
                         if (i == 3 && j > 3 && j <= 5) {
                              cout << 'M';
                         }
                         if (i == 4 && j <= 1) {
                              cout << 'N';
                         }
                         if (i == 4 && j > 1 && j <= 3) {
                              cout << 'O';
                         }
                         if (i == 4 && j > 3 && j <= 5) {
                              cout << 'P';
                         }
                         if (i == 5 && j <= 1) {
                              cout << 'Q';
                         }
                         if (i == 5 && j > 1 && j <= 3) {
                              cout << 'R';
                         }
                         if (i == 5 && j > 3 && j <= 5) {
                              cout << 'S';
                         }
                         if (i == 6 && j <= 1) {
                              cout << 'T';
                         }
                         if (i == 6 && j > 1 && j <= 3) {
                              cout << 'U';
                         }
                         if (i == 6 && j > 3 && j <= 5) {
                              cout << 'V';
                         }
                    }
                    cout << endl;
               }
          } else {
               for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                         if (m == 1) {
                              if (i == 0 && j <= 0) {
                                   cout << 'A';
                              }
                              if (i == 1 && j <= 0) {
                                   cout << 'B';
                              }
                              if (i == 2 && j <= 0) {
                                   cout << 'C';
                              }
                              if (i == 3 && j <= 0) {
                                   cout << 'D';
                              }
                              if (i == 4 && j <= 0) {
                                   cout << 'E';
                              }
                              if (i == 5 && j <= 0) {
                                   cout << 'F';
                              }
                              if (i == 6 && j <= 0) {
                                   cout << 'G';
                              }
                         }
                         if (m == 3) {
                              if (i == 0 && j <= 1) {
                                   cout << 'A';
                              }
                              if (i == 0 && j > 1 && j <= 2) {
                                   cout << 'B';
                              }
                              if (i == 1 && j <= 1) {
                                   cout << 'C';
                              }
                              if (i == 1 && j > 1 && j <= 2) {
                                   cout << 'B';
                              }
                              if (i == 2 && j <= 1) {
                                   cout << 'D';
                              }
                              if (i == 2 && j > 1 && j <= 2) {
                                   cout << 'E';
                              }
                              if (i == 3 && j <= 1) {
                                   cout << 'F';
                              }
                              if (i == 3 && j > 1 && j <= 2) {
                                   cout << 'E';
                              }
                              if (i == 4 && j <= 1) {
                                   cout << 'G';
                              }
                              if (i == 4 && j > 1 && j <= 2) {
                                   cout << 'H';
                              }
                              if (i == 5 && j <= 1) {
                                   cout << 'I';
                              }
                              if (i == 5 && j > 1 && j <= 2) {
                                   cout << 'H';
                              }
                         }
                         if (m == 5) {
                              if (i == 0 && j <= 1) {
                                   cout << 'A';
                              }
                              if (i == 0 && j > 1 && j <= 3) {
                                   cout << 'B';
                              }
                              if (i == 0 && j > 3 && j <= 4) {
                                   cout << 'C';
                              }
                              if (i == 1 && j <= 1) {
                                   cout << 'D';
                              }
                              if (i == 1 && j > 1 && j <= 3) {
                                   cout << 'E';
                              }
                              if (i == 1 && j > 3 && j <= 4) {
                                   cout << 'C';
                              }
                              if (i == 2 && j <= 1) {
                                   cout << 'F';
                              }
                              if (i == 2 && j > 1 && j <= 3) {
                                   cout << 'G';
                              }
                              if (i == 2 && j > 3 && j <= 4) {
                                   cout << 'H';
                              }
                              if (i == 3 && j <= 1) {
                                   cout << 'I';
                              }
                              if (i == 3 && j > 1 && j <= 3) {
                                   cout << 'J';
                              }
                              if (i == 3 && j > 3 && j <= 4) {
                                   cout << 'H';
                              }
                              if (i == 4 && j <= 1) {
                                   cout << 'K';
                              }
                              if (i == 4 && j > 1 && j <= 3) {
                                   cout << 'L';
                              }
                              if (i == 4 && j > 3 && j <= 4) {
                                   cout << 'M';
                              }
                              if (i == 5 && j <= 1) {
                                   cout << 'N';
                              }
                              if (i == 5 && j > 1 && j <= 3) {
                                   cout << 'O';
                              }
                              if (i == 5 && j > 3 && j <= 4) {
                                   cout << 'M';
                              }
                         }
                         if (m == 7) {
                              if (i == 0 && j <= 1) {
                                   cout << 'A';
                              }
                              if (i == 0 && j > 1 && j <= 3) {
                                   cout << 'B';
                              }
                              if (i == 0 && j > 3 && j <= 5) {
                                   cout << 'C';
                              }
                              if (i == 0 && j > 5 && j <= 6) {
                                   cout << 'D';
                              }
                              if (i == 1 && j <= 1) {
                                   cout << 'E';
                              }
                              if (i == 1 && j > 1 && j <= 3) {
                                   cout << 'F';
                              }
                              if (i == 1 && j > 3 && j <= 5) {
                                   cout << 'G';
                              }
                              if (i == 1 && j > 5 && j <= 6) {
                                   cout << 'D';
                              }
                              if (i == 2 && j <= 1) {
                                   cout << 'H';
                              }
                              if (i == 2 && j > 1 && j <= 3) {
                                   cout << 'I';
                              }
                              if (i == 2 && j > 3 && j <= 5) {
                                   cout << 'J';
                              }
                              if (i == 2 && j > 5 && j <= 6) {
                                   cout << 'K';
                              }
                              if (i == 3 && j <= 1) {
                                   cout << 'L';
                              }
                              if (i == 3 && j > 1 && j <= 3) {
                                   cout << 'M';
                              }
                              if (i == 3 && j > 3 && j <= 5) {
                                   cout << 'N';
                              }
                              if (i == 3 && j > 5 && j <= 6) {
                                   cout << 'K';
                              }
                              if (i == 4 && j <= 1) {
                                   cout << 'O';
                              }
                              if (i == 4 && j > 1 && j <= 3) {
                                   cout << 'P';
                              }
                              if (i == 4 && j > 3 && j <= 5) {
                                   cout << 'Q';
                              }
                              if (i == 4 && j > 5 && j <= 6) {
                                   cout << 'R';
                              }
                              if (i == 5 && j <= 1) {
                                   cout << 'S';
                              }
                              if (i == 5 && j > 1 && j <= 3) {
                                   cout << 'T';
                              }
                              if (i == 5 && j > 3 && j <= 5) {
                                   cout << 'U';
                              }
                              if (i == 5 && j > 5 && j <= 6) {
                                   cout << 'R';
                              }
                         }
                    }
                    cout << endl;
               }
          }
     }
     return 0;
}
