#include <iostream>
#include <vector>
using namespace std;
long NOD (long a, long b)
{
    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

long NOK (long a, long b)
{
    return a * b / NOD (a, b);
}

int main ()
{
    long x;
    cin >> x;
    vector<long>vect;
    for(long i = 1; i <= x; i++){
        if(x % i == 0)vect.push_back(i);
    }
    long count = 0;
    for(int i = 0; i < vect.size(); i++){
        for(int j = i+1; j< vect.size();j++){
            if(NOK(vect[i],vect[j])==x)count++;
        }
    }
    cout << count*2+1;
    return 0;
}

