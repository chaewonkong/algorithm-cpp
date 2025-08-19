#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b && b == c) {
        cout << 10000 + (a * 1000) << endl;

        return 0;
    }

    if (a == b || a == c || b == c) {
        int mul = 0;
        if (a == b || a == c) {
            mul = a;
        } else {
            mul = b;
        }
        cout << 1000 + (mul * 100) << endl;

        return 0;
    }

    cout << max(a, max(b, c)) * 100 << endl;

    return 0;
}