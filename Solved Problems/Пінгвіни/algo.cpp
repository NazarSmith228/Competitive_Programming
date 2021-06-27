#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    int arr[n][2];
    long count = 0;
    int maxx = 0;
    int maxy = 0;
    
    for(int i = 0; i < n; i++){
        cin >> arr[i][0] >> arr[i][1];
    }

    for(int i = 0; i < n; i++) {
            if(maxx < arr[i][0]){
                maxx = arr[i][0];
            }
            if (maxy < arr[i][1]) {
                maxy = arr[i][1];
            }
    }

    for(int i = 0; i < n; i++){
        while (arr[i][0] < maxx){
            arr[i][0]++;
            count++;
        }
        while (arr[i][1] < maxy){
            arr[i][1]++;
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}
