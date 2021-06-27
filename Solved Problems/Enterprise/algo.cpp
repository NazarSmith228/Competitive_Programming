#include <iostream>
#include <vector>
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
long sum (int tree[],int v, int tl, int tr, int l, int r) {
    if (l > r)
        return 0;
    if (l == tl && r == tr)
        return tree[v];
    int tm = (tl + tr) / 2;
    return sum (tree,v*2, tl, tm, l, min(r,tm))
           + sum (tree,v*2+1, tm+1, tr, max(l,tm+1), r);
}
void update (int tree[],int v, int tl, int tr, int pos, int new_val) {
    if (tl == tr)
        tree[v] = new_val;
    else {
        int tm = (tl + tr) / 2;
        if (pos <= tm)
            update (tree,v*2, tl, tm, pos, new_val);
        else
            update (tree,v*2+1, tm+1, tr, pos, new_val);
        tree[v] = tree[v*2] + tree[v*2+1];
    }
}
int main(){
    int n,m;
    cin >> n >> m;
    int arr[n];
    int Tree[4*n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vector<int>vector;
    build(arr,Tree,1,0,n-1);
    int check;
    int x,y;
    int X,Z;
    for(int i = 0; i < m; i++){
        cin >> check;
        if(check == 1){
            cin >> x >> y;
            int left = x - 1;
            int right = y - 1;
            if(sum(Tree,1,0,n-1,left,right) % 3 == 0)vector.push_back(1);
            else vector.push_back(0);
        } else{
            cin >> X >> Z;
            int pos = X - 1;
            int new_val = arr[X-1]+Z;
            update(Tree,1,0,n-1,pos,new_val);
            arr[X-1] = new_val;
        }
    }
    for(auto i : vector){
        cout << i << endl;
    }
    return 0;
}
