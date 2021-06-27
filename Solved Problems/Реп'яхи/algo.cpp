
#include <bits/stdc++.h>
using namespace std;
struct circle{
    double x,r,y;
};
vector<circle>circles;
int main(){
    int n;
    cin >> n;
    double x,r;
    for(int i = 0; i < n; i++){
        cin >> x >> r;
        double y = r;
        for(auto circle : circles){
            if(abs(circle.x - x) < circle.r + r){
                double c_y = sqrt(pow(circle.r + r,2) - pow(circle.x - x,2));
                y = max(y,c_y + circle.y);
            }

        }
        circles.push_back(circle{x,r,y});
        printf("%.7f %.7f\n", x, y);
    }
    return 0;
}

