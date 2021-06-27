#include "bits/stdc++.h"
using namespace std;

int n;
int C[7];
vector<int> I[7];

int main()
{
    cin >> n;
    int tot = 0;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        C[x] ++;
        I[x].push_back(i);
        tot += x;
    }

    for (int c1 = 0; c1 <= C[1]; ++c1)
        for (int c2 = 0; c2 <= C[2]; ++c2)
            for (int c3 = 0; c3 <= C[3]; ++c3)
                for (int c4 = 0; c4 <= C[4]; ++c4)
                {
                    int sum = c1*1 + c2*2 + c3*3 + c4*4;
                    if (sum*2 == tot)
                    {
                        vector<int> R;
                        for (int i = 0; i < c1; ++i) R.push_back(I[1][i]);
                        for (int i = 0; i < c2; ++i) R.push_back(I[2][i]);
                        for (int i = 0; i < c3; ++i) R.push_back(I[3][i]);
                        for (int i = 0; i < c4; ++i) R.push_back(I[4][i]);

                        cout << R.size() << endl;
                        sort(R.begin(), R.end());
                        for (int i = 0; i < R.size(); ++i)
                        {
                            if (i) cout << ' ';
                            cout << R[i]+1;
                        }
                        exit(0);
                    }
                }

    cout << -1 << endl;
}
