#include <iostream>

using namespace std;

int main()
{
  int n, odd, even;

  cin >> n;

  int* Arr = new int[n];

  for (int i = 0; i < n; i++) {
    cin >> Arr[i];
  }

  odd = 0;
  even = 0;

  int* Odd = new int[n];
  int* Even = new int[n];

  for (int i = 0; i < n; i++) {
    if (Arr[i] % 2 == 0) {
      Even[even++] = Arr[i];
    }
    else {
      Odd[odd++] = Arr[i];
    }
  }

  if (n % 2 == 0) {
    if (odd == even) {
      for (int i = 0; i < n / 2; i++) {
        cout << Odd[i] << " " << Even[i] << " ";
      }
      cout << endl;
    }
    else {
      cout << "-1" << endl;
    }
  }
  else {
    if (odd == even + 1) {
      cout << Odd[0] << " ";
      for (int i = 0; i < n / 2; i++) {
        cout << Even[i] << " " << Odd[i + 1] << " ";
      }
      cout << endl;
    }
    else if (even == odd + 1) {
      cout << Even[0] << " ";
      for (int i = 0; i < n / 2; i++) {
        cout << Odd[i] << " " << Even[i + 1] << " ";
      }
      cout << endl;
    }
    else {
      cout << "-1" << endl;
    }
  }
}
