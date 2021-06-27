#include <iostream>
using namespace std;
int main()
{
    string name;
    cin >> name;
    string newName;
    newName = name;
    for(int i = 1, j = 1,k = 2,l = 2; i < name.length(); i++){
        if(i % 2 != 0){
            newName[i] = name[name.length() - j];
            j++;
        } else{
            newName[k] = name[l - 1];
            k+=2;
            l++;
        }
    }
    cout << newName << endl;
    return 0;
}
