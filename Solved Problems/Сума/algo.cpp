#include <iostream>
#include <math.h>
using namespace std;
const int maxsize = 111112;
int main()
{
    int arra[maxsize],arrb[maxsize];
    string a , b;
    cin >> a >> b;
    for (int &i : arra) {
        i = 0;
    }
    for (int &i : arrb) {
        i = 0;
    }
    for(int j = 0; j < a.length(); j++){
        arra[a.length() - j - 1] = int(a[j]) - 48;
    }
    for(int j = 0; j < b.length(); j++){
        arrb[b.length() - j - 1] = int (b[j]) - 48;
    }
    int len = 0;
    if(a.length() < b.length()) len = b.length()+1;
    else len = a.length() + 1;

    for(int xx = 0; xx < len; xx++){
        arrb[xx] += arra[xx];
        arrb[xx + 1] += (arrb[xx] / 10);
        arrb[xx] %= 10;
    }
    if(arrb[len - 1] == 0) len--;

    for( int xx = len - 1; xx >= 0; xx--){
        cout << arrb[xx];
    }

    return  0;
}

