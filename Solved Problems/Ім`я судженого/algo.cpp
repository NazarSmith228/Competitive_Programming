#include <iostream>
using namespace std;
int main() {
    string set;
    cin >> set;
    string name;
    cin >> name;
    int arr1[26] = {0};
    int arr2[26] = {0};
    for(int i = 0; i < set.size(); i++){
        arr1[set[i] - 'a']++;
    }
    for(int j = 0; j < name.size(); j++){
        arr2[name[j] - 'a']++;
    }
    bool check = false;
    for(int k = 0; k < 26; k++){
        if(arr1[k] >= arr2[k]){
            check = true;
        } else{
            check = false;
            break;
        }
    }
    if(check)cout << "YES";
    else cout << "NO";
    return 0;
}

