#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    long arr[2*n];
    for(int i = 0; i < 2*n; i++){
        cin >> arr[i];
    }
    long long odd = 0, even = 0;
    for(int i = 0; i < 2*n; i+=2){
        odd += arr[i];
    }
    for(int i = 1; i < 2*n; i+=2){
        even += arr[i];
    }
    cout << "Marichka" << endl;
    int left = 0, right = 2*n -1;
    if( even >= odd){
        right--;
        cout <<"R";
        while (left < right){
            if(arr[left] >= arr[right]){
                left+=2;
                cout<<"L";
            } else{
                right-=2;
                cout<<"R";
            }
        }
    } else{
        left++;
        cout <<"L";
        while (left < right){
            if(arr[left] >= arr[right]){
                left+=2;
                cout<<"L";
            } else{
                right-=2;
                cout<<"R";
            }
        }
    }
    return 0;
}


