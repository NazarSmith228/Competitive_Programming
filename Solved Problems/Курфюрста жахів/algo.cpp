#include <iostream>
using namespace std;
int main()
{
    int n , count = 0;
    string s;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s;
        if( s == "In") count++;
        if(s == "Out") count--;
        if(count == -1){
            cout << "Error";
            break;
        }
    }

    if(count == 0){
        cout << "Just a fantasy";
    }
    if(count > 0){
        cout << "Cunning elector";
    }
    return  0;
}

