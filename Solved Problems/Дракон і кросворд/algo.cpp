#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    char arr[n][m];
    int array[100][100] = {0};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 1; j < n; j++){
            for(int y = 0; y < j; y++){
                if(arr[j][i] == arr[y][i]){
                    array[j][i] = 1;
                    array[y][i] = 1;
                }
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 1; j < m; j++){
            for(int x = 0; x < j; x++){
                if(arr[i][j] == arr[i][x]){
                    array[i][j] = 1;
                    array[i][x] = 1;
                }
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
                if(array[i][j] != 1) cout << arr[i][j];
        }
    }
    return  0;
}

