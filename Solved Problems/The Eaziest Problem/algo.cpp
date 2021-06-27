#include <iostream>
#include <set>
using namespace std;
int main() {
    int nj,nb;
    cin >> nj >> nb;
    int arr[nj],array[nb];
    set<int>set1;
    set<int>set2;
    for(int i = 0; i < nj; i++){
        cin >> arr[i];
        set1.insert(arr[i]);
    }
    for(int i = 0; i < nb; i++){
        cin >> array[i];
        set1.insert(array[i]);
    }
    int res1 = set1.size();
    if(nj > nb){
        for(int i = 0; i < nb; i++){
            for(int j = 0; j < nj; j++){
                if(array[i] == arr[j]){
                    set2.insert(array[i]);
                }
            }
        }
    } else{
        for(int i = 0; i < nj; i++){
            for(int j = 0; j < nb; j++){
                if(arr[i] == array[j]){
                    set2.insert(arr[i]);
                }
            }
        }
    }
    int res2 = set2.size();
    cout << res1 << " " << res2;
    return 0;
}

