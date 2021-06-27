#include <bits/stdc++.h>
using namespace std;
bool VerifyDecimal(long long value)
{
    if(value<=0)
        return false;
    while((value%2)==0)
    {

        if((value/=2)==1)
            return true;
    }
    return false;

}
int main()
{
    int n,m;
    cin >> n >> m;
    int minimal = min(n,m);
    int maximum = max(n,m);
    int begin = minimal - 1;
    int end = maximum - 1;
    long long adder = minimal-1;
    long long res = 0;
    for(int i = 0; i < begin; i++){
        long long temp = adder;
        for(int j = 0; j < end; j++){
            res += temp;
            temp+=adder;
        }
        adder--;
    }
    cout << res;
   return 0;
}