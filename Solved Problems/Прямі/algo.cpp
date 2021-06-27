#include <iostream>

using namespace std;

int main() {
  long long fx1, fy1, fx2, fy2;
  long long sx1, sy1, sx2, sy2;
  long long rxup, rxdown, ryup, rydown;
  long long nsd;

  cin >> fx1 >> fy1 >> fx2 >> fy2;
  cin >> sx1 >> sy1 >> sx2 >> sy2;

  rxup = (sx1 - sx2) * (fx1 * (fy2 - fy1) - fy1 * (fx2 - fx1)) - (fx1 - fx2) * (sx1 * (sy2 - sy1) - sy1 * (sx2 - sx1));
  rxdown = (fy2 - fy1) * (sx1 - sx2) - (sy2 - sy1) * (fx1 - fx2);

  ryup = (fy2 - fy1) * (sx1 * (sy2 - sy1) - sy1 * (sx2 - sx1)) - (sy2 - sy1) * (fx1 * (fy2 - fy1) - fy1 * (fx2 - fx1));
  rydown = (fy2 - fy1) * (sx1 - sx2) - (sy2 - sy1) * (fx1 - fx2);

  for (long long i = 1; i <= abs(rxdown); i++) {
    if (abs(rxup) % i == 0 && abs(rxdown) % i == 0) {
      nsd = i;
    }
  }

  rxup /= nsd;
  rxdown /= nsd;

  for (long long i = 1; i <= abs(rydown); i++) {
    if (abs(ryup) % i == 0 && abs(rydown) % i == 0) {
      nsd = i;
    }
  }

  ryup /= nsd;
  rydown /= nsd;

  if (rxdown < 0) {
    rxdown = -rxdown;
    rxup = -rxup;
  }

  if (rydown < 0) {
    rydown = -rydown;
    ryup = -ryup;
  }

  cout << rxup << '/' << rxdown << ' ' << ryup << '/' << rydown << endl;

  return 0;
}
