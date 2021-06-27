#include <iostream>
using namespace std;
int main() {
    int N,M,max=-1000,min=1001 ,x ,y;
    cin>>N>>M;
    int L[N][M];
    int m[1000]={0};

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin>>L[i][j];
            if(m[j]<L[i][j]) {
                m[j] = L[i][j];
            }
        }
    }
    for (int i = 0; i < M; ++i) {
        if(m[i]<min) min = m[i];
    }
    cout<<min;
    return 0;
}
