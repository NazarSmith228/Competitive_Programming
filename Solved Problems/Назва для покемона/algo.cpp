#include <iostream>
using namespace std;
int main() {
    string T,S;
    int j=0,counter=0,res=0;
    cin>>T;
    cin>>S;
    if(T.size()<S.size()){
        cout<<"NO";
    }
    else {
        for (int i = 0; i < T.size(); ++i) {
            if (T[i] == '?' || T[i] == S[j]) {
                j++;
                counter++;
            } else {
                i -= j;
                j = 0;
                counter = 0;
            }
            if (counter == S.size()) {
                res = 1;
                break;
            }

        }
        if (res == 1) cout << "YES";
        else cout << "NO";
    }
    return 0;
}
