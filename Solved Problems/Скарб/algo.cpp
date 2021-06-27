#include <bits/stdc++.h>
    using namespace std;
    int main(){
        int n;
        cin >> n;
        int arr[n][2];
        double x = 0;
        double y = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i][0] >> arr[i][1];
        }
        for(int i = 0; i < n; i++){
            if(arr[i][0] == 1){
                    y+= arr[i][1];
            } else if(arr[i][0] == 2){
                x+= sqrt(pow(arr[i][1],2)/2);
                y+= sqrt(pow(arr[i][1],2)/2);
            } else if(arr[i][0] == 3){
                x+= arr[i][1];
            } else if(arr[i][0] == 4){
                x+= sqrt(pow(arr[i][1],2)/2);
                y-= sqrt(pow(arr[i][1],2)/2);
            } else if(arr[i][0] == 5){
                y-= arr[i][1];
            } else if(arr[i][0] == 6){
                x-= sqrt(pow(arr[i][1],2)/2);
                y-= sqrt(pow(arr[i][1],2)/2);
            } else if(arr[i][0] == 7){
                x-= arr[i][1];
            } else{
                x-= sqrt(pow(arr[i][1],2)/2);
                y+= sqrt(pow(arr[i][1],2)/2);
            }
        }
        cout << fixed << setprecision(3) << x << " " << fixed << setprecision(3) << y;
        return 0;
    }

