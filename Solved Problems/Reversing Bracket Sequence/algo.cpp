#include <bits/stdc++.h>
using namespace std;
int Tree[1000000];
void build(int arr[], int v, int tl, int tr) {
    if (tl == tr) {
        Tree[v] = arr[tl];
    } else {
        int tm = (tl + tr) / 2;
        build(arr, v * 2, tl, tm);
        build(arr, v * 2 + 1, tm + 1, tr);
        Tree[v] = min(Tree[v * 2], Tree[v * 2 + 1]);
    }
}
int sum(int v,int tl,int tr,int l, int r){
    if( l > r)return 0;
    else if ( l == tl && r == tr)
        return Tree[v];
    else {
        int tm = (tl + tr) / 2;
        return min(sum(v*2,tl,tm,l,min(r,tm)),sum(v*2+1,tm+1,tr,max(tm+1,l),r));
    }
}
int main() {
    string s;
    cin >> s;
    int arr1[s.length()+2];
    int arr2[s.length()+2];
    arr1[0] = 0;
    arr1[s.length()+1] = 0;
    arr2[0] = 0;
    arr2[s.length()+1] = 0;
    int count1 = 0,count2 = 0;
    for(int i = 1; i <= s.length(); i++){
        if(s[i-1] == '(')count1++;
        else count1--;
        if(s[s.length()-i] == '(')count2++;
        else count2--;
        arr1[i] = count1;
        arr2[s.length()-i+1] = count2;
    }
    int q;
    cin >> q;
    vector<string>vector;
    build(arr2, 1, 1, s.length());
    for (int i = 0; i < q; i++){
        int left,right;
        cin >> left >> right;
        if(arr1[left - 1] >= arr2[right+1] - sum(1,1,s.length(),left,right))vector.emplace_back("YES");
        else vector.emplace_back("NO");
    }
    for(const auto &i: vector)cout << i << endl;
    return 0;
}

