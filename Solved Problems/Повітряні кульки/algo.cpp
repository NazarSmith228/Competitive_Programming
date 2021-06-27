#include <bits/stdc++.h>
using namespace std;
int func(int n,int t,int z,int y)
{
    int l = (t*z)+y;
    l = (n % l) + 1 ;
    if(l > t*z) return 0;
    else if(l % t == 0)return 1;
    return 0;
}
int main()
{
    int balls,boys;
    cin >> balls >> boys;
    int arr[boys][3];
    for(int i = 0; i < boys; i++)
    {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }
    int res = 0;
    int i = 0;
    for( i = 0; res < balls; i++){
        for(int j = 0; j < boys; j++){
            res += func(i,arr[j][0],arr[j][1],arr[j][2]);
        }
    }
    cout << i;
}
