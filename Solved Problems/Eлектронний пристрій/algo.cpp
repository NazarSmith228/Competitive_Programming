#include <iostream>
using namespace std;
void build (int array[],int tree[], int v, int tl, int tr) {
    if (tl == tr)
        tree[v] = array[tl];
    else {
        int tm = (tl + tr) / 2;
        build (array,tree,v*2,tl,tm);
        build (array,tree,v*2+1,tm+1,tr);
        tree[v] = tree[v*2] + tree[v*2+1];
    }
}
int summa (int tree[],int v, int tl, int tr, int l, int r) {
    if (l > r)
        return 0;
    if (l == tl && r == tr)
        return tree[v];
    int tm = (tl + tr) / 2;
    return summa (tree,v*2, tl, tm, l, min(r,tm))
           + summa (tree,v*2+1, tm+1, tr, max(l,tm+1), r);
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int m;
    cin >> m;
    int array[m][2];
    for(int i = 0; i < m; i++){
        cin >> array[i][0];
        cin >> array[i][1];
    }
    int Tree[4*n];
    build(arr,Tree,1,0,n-1);
    for(int i = 0; i < m; i++){
        int left = array[i][0]-1;
        int right = array[i][1]-1;
        if(right < left){
            int temp = right;
            right = left;
            left = temp;
        }
        if(summa(Tree,1,0,n-1,left,right) == right-left+1 || summa(Tree,1,0,n-1,left,right) == 0){
            cout << "1" << endl;
        } else{
            cout << "0" << endl;
        }
    }
    return 0;
}
