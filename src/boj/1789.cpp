#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

long long triangularNumber(long long n) {
    return n * (n+1) / 2;
}

int main() {
    long long cnt = 0;
    long long target;
    std::cin >> target;

    long long n = 1;
    while (target >= triangularNumber(n)) {
        cnt++;
        n++;
    }

    std::cout << cnt << std::endl;

    return 0;
}