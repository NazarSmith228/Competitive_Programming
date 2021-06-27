#include <iostream>
using namespace std;
int main()
{
    string m;
    cin >> m;
    int n;
    cin >> n;
    int num[26] = {0};
    int mai[26] = {0};
    int res[26] = {0};
    int min = 1000;
    string arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < arr[i].size(); j++){
            num[arr[i][j] - 'a']++;
        }
    }
    for(int i = 0; i < m.size(); i++){
        mai[m[i] - 'a']++;
    }
    for(int i = 0; i < 26; i++){
        if(mai[i] != 0) {
            res[i] = num[i] / mai[i];
        }
    }
    for(int i = 0; i < 26; i++){
        if(res[i] != 0){
            if(min > res[i]){
                min = res[i];
            }
        }
    }
    cout << min;
    return  0;
}
