#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '7' && s[i+1] == '4'){
            count++;
        }
    }
    cout << count;
    return  0;
}

