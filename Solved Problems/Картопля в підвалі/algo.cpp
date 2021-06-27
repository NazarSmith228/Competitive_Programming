#include <bits/stdc++.h>
using namespace std;
int main(){
  int h,w;
    cin >> h >> w;
    int arr[h][w];
    int sum = 0;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> arr[i][j];
            sum += arr[i][j];
        }
    }
    cout << sum << endl;
    for(int x = h; x > 0; x--){
        for(int y = w; y > 0; y--){
            for(int z = arr[x-1][y-1]; z > 0; z--){
                cout << x << " " << y << " " << z << endl;
            }
        }
    }
    return 0;
}
