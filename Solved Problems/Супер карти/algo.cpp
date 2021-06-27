#include <iostream>
#include <deque>
using namespace std;
int main() {
     int n;
     cin >> n;
     deque<int>cards;
     for(int i = 1; i <= n; i++){
          cards.push_back(i);
     }
     while (cards.size() >= 2){
          cards.pop_front();
          cards.push_back(cards.front());
           cards.pop_front();
     }
     cout << cards.front();
     return 0;
}
