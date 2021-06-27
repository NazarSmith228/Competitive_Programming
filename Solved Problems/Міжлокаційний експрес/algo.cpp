#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n ;
    char arr[n][5];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 5; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[i][0] == 'F' && arr[i][1] == 'F' && arr[i][3] == 'F' && arr[i][4] == 'F') {
                cout << "Hooray!" << endl;
                cout << ((i + 1) * 10) + 3 << " " << ((i + 1) * 10) + 4;
                return 0;
            } else if (arr[i][0] == 'F' && arr[i][1] == 'F' && arr[i][3] == 'F' && arr[i][4] != 'F') {
                cout << "Hooray!" << endl;
                cout << ((i + 1) * 10) + 1 << " " << ((i + 1) * 10) + 2;
                return 0;
            } else if (arr[i][0] != 'F' && arr[i][4] != 'F' && arr[i][1] == 'F' && arr[i][3] == 'F') {
                cout << "Hooray!" << endl;
                cout << ((i + 1) * 10) + 2 << " " << ((i + 1) * 10) + 3;
                return 0;
            } else if (arr[i][0] != 'F' && arr[i][1] == 'F' && arr[i][3] == 'F' && arr[i][4] == 'F') {
                cout << "Hooray!" << endl;
                cout << ((i + 1) * 10) + 3 << " " << ((i + 1) * 10) + 4;
                return 0;
            } else if (arr[i][0] == 'F' && arr[i][1] == 'F' && arr[i][3] != 'F' && arr[i][4] != 'F') {
                cout << "Hooray!"<<endl;
                cout << ((i+1)*10)+1 << " " << ((i+1)*10)+2;
                return 0;
            } else if(arr[i][0]=='F'&& arr[i][1]!='F'&& arr[i][3]=='F'&&arr[i][4]=='F'){
                cout << "Hooray!" << endl;
                cout << ((i + 1) * 10) + 3 << " " << ((i + 1) * 10) + 4;
                return 0;
            } else if(arr[i][0]!='F'&& arr[i][1]!='F'&& arr[i][3]=='F'&&arr[i][4]=='F'){
                cout << "Hooray!" << endl;
                cout << ((i + 1) * 10) + 3 << " " << ((i + 1) * 10) + 4;
                return 0;
            } else if(arr[i][0] == 'F' && arr[i][1] == 'F' && arr[i][3] != 'F' && arr[i][4] == 'F'){
                cout << "Hooray!"<<endl;
                cout << ((i+1)*10)+1 << " " << ((i+1)*10)+2;
                return 0;
            }

        }
    }
    cout <<"No";
    return 0;
}
