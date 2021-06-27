#include <iostream>
using namespace std;
int main() {
     string s;
     cin >> s;
     int len = s.length();
     int count = 0;
     if(s[0] == '_' && s[1] == '_')count++;
     if(s[len - 1] == '_' && s[len - 2] == '_')count++;
     for(int i = 2; i < len-2; i++){
          if(s[i] == '_' && s[i-1] != '#' && s[i+1] != '#'){
               count++;
               i++;
          }
     }
     cout << count;
     return 0;
}
