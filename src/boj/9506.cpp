#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

using namespace std;

int main() {
  int n;

  while (true) {
    cin >> n;
    if (n == -1) {
      break;
    }
    vector<int> arr;
    arr.push_back(1);

    for (int i = 2; i <= n / 2; i++) {
      if (n % i == 0) {
        arr.push_back(i);
      }
    }

    int total = accumulate(arr.begin(), arr.end(), 0);
    if (total == n) {
      cout << n << " = ";

      for (int j = 0; j < arr.size(); j++) {
        cout << arr[j];
        if (j == arr.size() - 1) {
          cout << endl;
          break;
        }
        cout << " + ";
      }
    } else {
      cout << n << " is NOT perfect." << endl;
    }
  }

  return 0;
}