#include <iostream>

using namespace std;

int main()

{
    long long N,sum=0,temp;

     cin >> N ;


     for(int i=0; i<N;i++)

        {

            cin >> temp;

            sum+=temp;

        }


     cout << sum-N;

     return 0;

}