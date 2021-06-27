#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    char x;
    vector<pair<int,int>>pairs1;
    vector<pair<int,int>>pairs2;
    vector<pair<int,int>>pairs3;
    vector<pair<int,int>>pairs4;
    vector<pair<int,int>>pairs5;
    vector<pair<int,int>>pairs6;
    vector<pair<int,int>>pairs7;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> x;
            if(x == '1'){
                pairs1.emplace_back(i,j);
            }
            else if(x == '2'){
                pairs2.emplace_back(i,j);
            }
            else if(x == '3'){
                pairs3.emplace_back(i,j);
            }
            else if(x == '4'){
                pairs4.emplace_back(i,j);
            }
            else if(x == '5'){
                pairs5.emplace_back(i,j);
            }
            else if(x == '6'){
                pairs6.emplace_back(i,j);
            } else{
                pairs7.emplace_back(i,j);
            }
        }
    }
    int numbers[7];
    numbers[0] = pairs1.size();
    numbers[1] = pairs2.size();
    numbers[2] = pairs3.size();
    numbers[3] = pairs4.size();
    numbers[4] = pairs5.size();
    numbers[5] = pairs6.size();
    numbers[6] = pairs7.size();
    int counters[7] = {0};
    for(int i = 0; i < pairs1.size(); i++) {
        for (int j = 0; j < pairs1.size(); j++) {
            if (i == j)continue;
            if (abs(pairs1.at(static_cast<unsigned int>(i)).first - pairs1.at(static_cast<unsigned int>(j)).first) <=
                1 && abs(pairs1.at(
                    static_cast<unsigned int>(i)).second - pairs1.at(static_cast<unsigned int>(j)).second) <= 1) {
                counters[0]++;
                break;
            }
        }
    }
        for(int i = 0; i < pairs2.size(); i++){
            for(int j = 0; j < pairs2.size(); j++){
                if(i == j)continue;
                if(abs(pairs2.at(static_cast<unsigned int>(i)).first - pairs2.at(static_cast<unsigned int>(j)).first) <= 1 && abs(pairs2.at(
                        static_cast<unsigned int>(i)).second - pairs2.at(static_cast<unsigned int>(j)).second) <= 1) {
                    counters[1]++;
                    break;
                }
            }
    }
    for(int i = 0; i < pairs3.size(); i++){
        for(int j = 0; j < pairs3.size(); j++){
            if(i == j)continue;
            if(abs(pairs3.at(static_cast<unsigned int>(i)).first - pairs3.at(static_cast<unsigned int>(j)).first) <= 1 && abs(pairs3.at(
                    static_cast<unsigned int>(i)).second - pairs3.at(static_cast<unsigned int>(j)).second) <= 1) {
                counters[2]++;
                break;
            }
        }
    }
    for(int i = 0; i < pairs4.size(); i++){
        for(int j = 0; j < pairs4.size(); j++){
            if(i == j)continue;
            if(abs(pairs4.at(static_cast<unsigned int>(i)).first - pairs4.at(static_cast<unsigned int>(j)).first) <= 1 && abs(pairs4.at(
                    static_cast<unsigned int>(i)).second - pairs4.at(static_cast<unsigned int>(j)).second) <= 1) {
                counters[3]++;
                break;
            }
        }
    }
    for(int i = 0; i < pairs5.size(); i++){
        for(int j = 0; j < pairs5.size(); j++){
            if(i == j)continue;
            if(abs(pairs5.at(static_cast<unsigned int>(i)).first - pairs5.at(static_cast<unsigned int>(j)).first) <= 1 && abs(pairs5.at(
                    static_cast<unsigned int>(i)).second - pairs5.at(static_cast<unsigned int>(j)).second) <= 1) {
                counters[4]++;
                break;
            }
        }
    }
    for(int i = 0; i < pairs6.size(); i++){
        for(int j = 0; j < pairs6.size(); j++){
            if(i == j)continue;
            if(abs(pairs6.at(static_cast<unsigned int>(i)).first - pairs6.at(static_cast<unsigned int>(j)).first) <= 1 && abs(pairs6.at(
                    static_cast<unsigned int>(i)).second - pairs6.at(static_cast<unsigned int>(j)).second) <= 1) {
                counters[5]++;
                break;
            }
        }
    }
    for(int i = 0; i < pairs7.size(); i++){
        for(int j = 0; j < pairs7.size(); j++){
            if(i == j)continue;
            if(abs(pairs7.at(static_cast<unsigned int>(i)).first - pairs7.at(static_cast<unsigned int>(j)).first) <= 1 && abs(pairs7.at(
                    static_cast<unsigned int>(i)).second - pairs7.at(static_cast<unsigned int>(j)).second) <= 1) {
                counters[6]++;
                break;
            }
        }
    }
    for(int i = 0; i < 7; i++){
        cout << i+1 << " - " << numbers[i] << " " << counters[i] << endl;
    }
    return 0;
}

