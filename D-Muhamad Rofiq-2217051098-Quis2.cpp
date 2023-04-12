#include <iostream>
#include <cmath>
using namespace std;

int DigitVariabel(int x, int lastdigit) {
  if (x == 0) {
    return lastdigit;
  } else {
    return DigitVariabel(x-1, lastdigit*8) ;
  }
}

int main() {
  int x = 9;
  int hasil = DigitVariabel(x, 1);

  cout << hasil << endl;

  return 0;
}

