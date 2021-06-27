#include <iostream>
#include "unordered_map"
#include "unordered_set"
#include <algorithm>
#include "vector"
#include "math.h"
using namespace std;
int n, k ,s, t;
long long m;

double find_len(double x, double y){
    return sqrt(x*x + y*y);
}
int modulo = 1000003;
int result = 0;
unordered_map<int, unordered_set<int>> mapa;
bool was[1000001] = {false};
int INF = 1000000;
unordered_map<int, int> fact;
vector<int> edj[101];
void dfs(int v, int last){

}
double x[3];
double y[3];
double gate(int x3, int y3, int x1, int y1, int x2, int y2){
    int px = x2-x1;
    int py = y2-y1;

    double something = px*px + py*py;

    double u = ((x3-x1)*px +(y3-y1)*py)/something;

    if(u>1){
        u=1;
    }
    else if(u<0){
        u=0;
    }

    double x = x1+u*px;
    double y = y1+u*py;

    double dx = x-x3;
    double dy = y-y3;

    double dist = sqrt(dx*dx + dy*dy);
    return dist;

}

double getVer(double x, double y){
    return sqrt(x*x + y*y);
}
double getLen(double kx, double ky){
    double v1 = INF;
    for(int i = 0;i<3;i++){
        v1 = min(v1, getVer(kx - x[i], ky-y[i]));
    }
    for(int i = 0;i<3;i++){
        int end = i;
        int start = i == 0 ? 2 : i-1;
        v1 = min(v1, gate(kx, ky, x[start], y[start], x[end], y[end]));
    }
    return v1;
}
int main() {
    for(int i = 0;i<3;i++){
        cin >> x[i] >> y[i];
    }
    cin >> n;
    double res = 0;
    for(int i = 0;i<n;i++){
        double x_cur, y_cur;
        cin >> x_cur >> y_cur;
        res = max(res, getLen(x_cur, y_cur));
    }
    cout.precision(4);
    cout<<fixed<<round(res*10000)/10000;
}

