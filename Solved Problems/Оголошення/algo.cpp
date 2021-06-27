#include <iostream>
    using namespace std;
    int main(){
        string olds,news;
        cin >> news;
        cin >> olds;
        int len = olds.size();
        int first[26] = {0};
        int second[26] = {0};
        for (char old : olds) {
            first[old - 'a']++;
        }
        for (char i : news) {
            second[i - 'a']++;
        }
        bool check = true;
        for (char old : olds) {
            if(first[old - 'a'] != second[old - 'a'])
                check = false;
        }
        if(!check){
            cout << -1;
            return 0;
        }
        if(olds.size() != news.size()){
            cout << -1;
            return 0;
        }
            int count = 0;
            for(int i = 0; i < len; i++){
                    for(int j = i; j < len; j++){
                        if(olds[j] == news[i]){
                            for(int k = j; k > i; k-- ){
                                char temp = olds[k];
                                olds[k] = olds[k-1];
                                olds[k-1] = temp;
                                count++;
                            }
                            break;
                        }
                    }
                }
            cout << count << endl;
        return 0;
    }


