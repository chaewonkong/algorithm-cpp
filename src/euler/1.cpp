#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    // 1000보다 작은 수 중 3 또는 5의 배수를 모두 더하기
    // 3의 배수 + 5의 배수 - 15의 배수
    int total = 0;

    for (int i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
          total += i;
        }
    }
    std::cout << total << std::endl;

    return 0;
}
