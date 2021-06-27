#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count = 0;
    int arr[26] = {0};
    for(int i = 0; i < s.length(); i++){
        arr[s[i] - 97]++;
    }
    for(int i = 0; i < 26; i++){
        if(arr[i] % 2 != 0) count++;
    }
    if(s.length() % 2 == 0){
        if(count == 0){
            cout << "YES";
        } else{
            cout << "NO";
        }
    }
    if( s.length() % 2 !=0){
        if( count == 0 || count == 1){
            cout << "YES";
        } else{
            cout << "NO";
        }
    }
    return  0;
}

