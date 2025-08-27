#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<int> a;
  vector<int> b;
  char c;
  string opr;

  while ((c = cin.get()) != '\n') {
    if (isdigit(c)) {
      a.push_back(c - '0');
    }
  }

  cin >> opr;
  cin.ignore();

  while ((c = cin.get()) != '\n') {
    if (isdigit(c)) {
      b.push_back(c - '0');
    }
  }

  if (opr == "+") {
    // 덧셈
    if (b.size() > a.size()) {
        swap(a, b);
    }

    int i = a.size() - 1, j = b.size() - 1;
    while (i >= 0 && j >= 0) {
        a[i] = a[i] + a[j];
        i--;
        j--;
    }
  } else {
    // 곱셈
    for (int i = 0; i < b.size() - 1; i++) {
      a.push_back(0);
    }
  }

  for (int elm : a) {
    cout << elm;
  }
  cout << endl;

  return 0;
}