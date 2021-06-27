#include <iostream>
#include <string>
using namespace std;

int a[128];

int main()
{
    string s, t;
    cin >> s >> t;
    int posS = 0;
    int posT = 0;
    while (posT != t.size() && posS != s.size()){
        if (s[posS] == t[posT]) {
            ++posS;
            ++posT;
        } else {
            ++a[s[posS]];
            ++posS;
        }
    }
    if (posT != t.size()) {
        cout << "-1" << endl;
        return 0;
    }
    for (int i = posS; i < s.size(); ++i)
        a[s[i]]++;

    int ans = 0;
    for (auto &x : a)
    {
        ans = max(ans, (x + 1) / 2);
    }
    cout << ans << endl;

    return 0;
}

