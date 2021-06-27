#include <bits/stdc++.h>
using namespace std;
int Check_Round(double a1, double b1, double r1,
                double a2, double b2, double r2)
{

    if (sqrt((a1-a2)*(a1-a2)+
             (b1-b2)*(b1-b2))+r2 < r1)
        return 1;
    else
        return 0;

}
int main(){
    int n;
    cin >> n;
    if(n == 1)cout << 0;
    else{
        int count = 0;
        double arr[n][3];
        for(int i = 0; i < n; i++){
            cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
        }
        int max = -1;
        for(int i = 0; i < n; i++){
            count = 0;
            for(int j = 0; j < n; j++){
                if(Check_Round(arr[i][0],arr[i][1],arr[i][2],arr[j][0],arr[j][1],arr[j][2]) == 1)count++;
            }
            if( max < count) max = count;
        }
        cout << max;
    }
    return 0;
}
