#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int maxx = -1,ind = 0,size = 0;
    int indexes[n];
    for(int j = n -1; j >= 0; j--){
        if(arr[j] > maxx){
            maxx = arr[j];
            indexes[ind++] = j;
            size++;
        }
    }
    for(int i = 0; i < size; i++){
        for(int j = i; j < size; j++){
            int function = arr[indexes[i]]*(indexes[j]+1)+arr[indexes[j]]*(indexes[i]+1);
            if(maxx < function)maxx = function;
        }
    }
    cout << maxx;
    return 0;
}

