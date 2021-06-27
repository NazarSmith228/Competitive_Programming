#include <iostream>
using namespace std;
int main() {
    int Numb,Kom;
    cin >> Numb >> Kom;
    if(Numb > Kom*3 || Numb<Kom){
        cout << "Impossible" << endl;
        return 0;
    }
    while(Kom>0){
        int temp = Numb/Kom;
        cout << temp << " ";
        Numb-=temp;
        Kom--;
    }
    return 0;
}
