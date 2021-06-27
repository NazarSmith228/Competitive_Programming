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
long summa (int tree[],int v, int tl, int tr, int l, int r) {
    if (l > r)
        return 0;
    if (l == tl && r == tr)
        return tree[v];
    int tm = (tl + tr) / 2;
    return summa (tree,v*2, tl, tm, l, min(r,tm))
           + summa (tree,v*2+1, tm+1, tr, max(l,tm+1), r);
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
int main() {
    int n,q;
    cin >> n >> q;
    int arr[n];
    int Tree[4*n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    build(arr,Tree,1,0,n-1);
    vector<long>vector;
    string str;
    int s,f;
    int p,v;
    for(int i = 0; i < q; i++){
        cin >> str;
        if(str == "query"){
            cin >> s >> f;
            int left = s - 1;
            int right = f - 1;
            vector.push_back(summa(Tree,1,0,n-1,left,right));
        } else{
            cin >> p >> v;
            int pos = p-1;
            int new_val = v;
            update(Tree,1,0,n-1,pos,new_val);
        }
    }
    for(auto i: vector){
        cout << i << endl;
    }
    return 0;
}

