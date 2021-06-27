#include <iostream>
using namespace std;
int main ()
{
    int n,m,x,y;
    cin >> n >> m;
    cin >> x >> y;
    int h1 = x;
    int h2 = y;
    while( n > 0 && m > 0){
        int t1 = n;
        int t2 = m;
        for(int i = 0; i < t2; i++){
            h1--;
            if(h1 <= 0){
                n--;
                h1 = x;
            }
        }
        for(int i = 0; i < t1; i++){
            h2--;
            if(h2 <= 0){
                m--;
                h2 = y;
            }
        }
    }
    if( n < m ) cout << "SECOND";
    else if(m < n) cout << "FIRST";
    else cout <<"DRAW";
    return 0;
}

