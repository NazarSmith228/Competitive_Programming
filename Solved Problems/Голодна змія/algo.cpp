#include <bits/stdc++.h>
using namespace std;
    int sum(vector<int>& result, const vector<int>& v, int index, int curSum)
    {
        if (index < v.size())
        {
            curSum += v[index];
            for (int i = index + 1; i < v.size(); ++i)
            {
                int res = sum(result, v, i, curSum);
                result.push_back(res);
            }
        }
        return curSum;
    }

    int main()
    {

        int n,m;
        cin >> n >> m;
        vector<int>weights;
        int weight;
        for(int i = 0; i < n; i++){
            cin >> weight;
            weights.push_back(weight);
        }
        vector<int>suitable;
        for(int i = 0; i < weights.size(); i++){
            int summa = sum(suitable,weights,i,0);
            if(summa == m)suitable.push_back(summa);
        }
        int count = 0;
        sort(suitable.begin(),suitable.end());
        for(auto i: suitable){
            if(i == m)count++;
        }
        cout << count;
        return 0;
    }
