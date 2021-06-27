#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set <string> set;
    string arr[n];
    for(int k = 0; k < n; k++){
        cin >> arr[k];
    }
    for(int j = 0; j < n; j++){
        sort(arr[j].begin(),arr[j].end());
    }
    for(int i = 0; i < n; i++){
        set.insert(arr[i]);
    }
    cout << set.size();
    return  0;
}

