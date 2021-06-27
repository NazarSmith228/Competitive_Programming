#include <bits/stdc++.h>
using namespace std;
int solution(vector<int>&solut){
    vector<int>temporary;
    int sum = 0;
    temporary.push_back(solut[0]);
    for(int i = 1; i < solut.size(); i++){
        if(solut[i] == 7){
            while (temporary.size() > 1){
                if(temporary.back() == 4){
                    temporary.pop_back();
                    sum += temporary.back() + solut[i];
                } else break;
            }
            temporary.push_back(7);
        } else{
            if(i != solut.size()-1 && temporary.back() == 7){
                sum += temporary.back() + solut[i+1];
            } else temporary.push_back(4);
        }
    }
    solut = temporary;
    return sum;
}
int main() {
    int n;
    cin >> n;
    vector<int> main(static_cast<unsigned int>(n));
    for (int i = 0; i < n; ++i) cin >> main[i];
    int res = 0;
    res += solution(main);
    int index_of_seven = 0;
    if(main[0] == 4)index_of_seven = 1;
    for(int i = index_of_seven+1; i < main.size()-1; i++){
        res += main[index_of_seven] + main[i+1];
    }
    if(index_of_seven == 1 && main.size() > 2)res += main[0] + main.back();
    cout << res;
    return 0;
}
