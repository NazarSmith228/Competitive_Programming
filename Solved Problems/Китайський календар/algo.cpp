#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    string animals[12] = {"rat","ox","tiger","rabbit","dragon","snake","horse","sheep","monkey","rooster","dog","pig"};
    string colours[10] = {"teal","teal","red","red","yellow","yellow","white","white","black","black"};
    int anim = (n-3)%12;
    int color = (n-4)%10;
    if(anim == 0){
        cout << colours[color] << " "<< animals[11];
    } else if(color == 10){
        cout << colours[9] << " "<< animals[anim-1];
    } else {
        cout << colours[color] << " " << animals[anim - 1];
    }
    return 0;
}

