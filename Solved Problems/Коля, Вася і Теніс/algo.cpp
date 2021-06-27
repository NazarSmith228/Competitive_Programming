#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main() {
    int N,countK=0,countV=0,countK2=0,countV2=0;
    cin >> N;
    string str;
    cin>>str;
    for(int i=0 ; i<str.length() ; i++) {
        if(str[i]=='K')
            countK++;
        if(str[i]=='V')
            countV++;

        if(countK>=11 && (countK-countV)>=2) {
            countK2++;
            countK=0;
            countV=0;
        }

        if(countV>=11 && (countV-countK)>=2) {
            countV2++;
            countV=0;
            countK=0;
        }
    }
    cout << countK2 << ":" << countV2 << endl;
    if(countK==0 && countV==0)
    {}
    else
    cout << countK << ":" << countV << endl;
    return 0;
}