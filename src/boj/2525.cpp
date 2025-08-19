#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int h, m, due;

    std::cin >> h;
    std::cin >> m;
    std::cin >> due;

    int rHour = 0;
    int rMin = 0;

    rMin = m + due;
    rHour = h + (rMin / 60);
    rMin = rMin % 60;

    rHour = rHour % 24;
    std::cout << rHour << " " << rMin << std::endl;

    return 0;
}
