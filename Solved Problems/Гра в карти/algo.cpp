#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main()
{
 deque<char> res;
 vector<int> A(26);
 int n; cin >> n;
 for (size_t i = 0; i < n; i++)
 {
  char temp; cin >> temp;
  A[temp - 'a']++;
 }
 for (size_t i = 0; i < A.size(); i++)
 {
  if (A[i] % 2)
  {
   res.push_back(i + 'a');
   break;
  }
 }
 for (size_t i = 0; i < A.size(); i++)
 {
  A[i] /= 2;
  for (size_t j = 0; j < A[i]; j++)
  {
   res.push_back(i + 'a');
   res.push_front(i + 'a');
  }
 }
 for (size_t i = 0; i < res.size(); i++)
 {
  cout << res[i];
 }


 system("pause");
 return 0;
}
