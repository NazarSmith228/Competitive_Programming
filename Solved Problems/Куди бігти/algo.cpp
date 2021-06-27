#include <iostream>

using namespace std;
int main()
{
    double Sd,Su,V;
    cin >> Sd >> Su >> V;
    double Td = 0;
    double Tu = 0;
    if(V == 0)
        return  0;
    Td = Sd / (V * 2);
    Tu = Su / (V / 2);
    if(Td < Tu) cout << "Down";
    if(Tu < Td) cout << "Up";
    if(Td == Tu) cout << "Never mind";
    return  0;
}

