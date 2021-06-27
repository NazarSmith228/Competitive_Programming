#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
int div(double arr[],int len, double mid){
    int count = 0;
    for(int i = 0; i < len;i++){
        count += (int)(arr[i]/mid);
    }
    return count;
}
int main() {
    int n;
    long k;
    cin >> n >> k;
    double arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);	
    double left = 0,right = 1000000000,mid;
    while (right - left > 0.00001){
        mid = left + (right-left)/2;
        int count = div(arr,n,mid);
        if(count == k) left = mid;
        else if(count > k)
            left = mid;
        else{
            right = mid;
        }
    }
    cout << fixed << setprecision(4) << mid;
    return 0;
}
