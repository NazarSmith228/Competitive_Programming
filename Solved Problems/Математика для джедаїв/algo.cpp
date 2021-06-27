#include <bits/stdc++.h>
using  namespace std;
int main(){
    int t;
    cin >> t;
    int x,y,z;
    for(int i = 0; i < t; i++){
        cin >> x >> y >> z;
        cout << abs((x/2)+(y/2)+(z/2)) << " " << abs((x/2)+(y/2)-(z/2)) << " " <<
        abs((x/2)-(y/2)+(z/2)) << " " << abs((-x/2)+(y/2)+(z/2)) << endl;
    }
    return 0;
}
