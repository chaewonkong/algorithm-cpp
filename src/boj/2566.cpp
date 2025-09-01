#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int num;
  int maxNum = 0;
  int x, y;
  for (int j = 1; j < 10; j++) {
    for (int i = 1; i < 10; i++) {
      cin >> num;
      maxNum = max(num, maxNum);
      if (maxNum == num) {
        x = i;
        y = j;
      }
    }
  }
  cout << maxNum << "\n" << y << " " << x << endl;

  return 0;
}