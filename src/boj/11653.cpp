// prime factorization
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int n;
    int div = 2;
    std::cin >> n;

    if (n == 1) {
        return 0;
    }

    while (n > 1) {
        while (n % div == 0) {
            std::cout << div << std::endl;
            n = n / div;
        }
        div += 1;
    }

    return 0;
}