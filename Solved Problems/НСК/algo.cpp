#include <iostream>
using namespace std;
long NSD(long a, long b){
    if(b == 0){
        return  a;
    }
    return NSD(b, a%b);
}
int main() {
    long a,nsd = 1;
    for(int i = 0; i < 3; i++){
        cin >> a;
        nsd = (nsd*a)/ NSD(nsd,a);
    }
    cout << nsd << endl;
}
