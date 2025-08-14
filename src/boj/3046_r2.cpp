#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int r1, s;
    std::cin >> r1;
    std::cin >> s;

    std::cout << std::to_string(2*s - r1) << std::endl;

    return 0;
}