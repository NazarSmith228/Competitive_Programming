#include <iostream>
using  namespace std;

long NSD(long a, long b){
    if(b == 0){
        return  a;
    }
    return NSD(b, a%b);
}
int main() {
    int N;
    cin >> N;
    long amount[N], count = 0;
    for ( int i = 0; i < N ; i++){
        cin >> amount[i];
    }
    long nsd = amount[0];
    for ( int i = 0; i < N; i++ ){
         nsd = NSD(nsd, amount[i]);
    }
    for( int i = 0; i < N; i++){
        count += amount[i]/nsd;
    }
    cout << count << endl;
    return 0;
}
