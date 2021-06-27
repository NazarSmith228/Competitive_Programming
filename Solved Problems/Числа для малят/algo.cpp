#include <algorithm>
#include <iostream>
#include <deque>
using namespace std;
int main() {
    long n;
    cin >> n;
    string s = to_string(n);
    sort(s.begin(),s.end());
    deque<string>deque;
    do{
        if(s[0] != '0'){
            deque.push_back(s);
        }

    }while (next_permutation(s.begin(),s.end()));
    cout << deque.front() << " " << deque.back();
    return 0;
}

