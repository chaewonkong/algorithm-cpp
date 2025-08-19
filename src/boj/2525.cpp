#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int h, m, due;

    cin >> h >> m >> due;

    int rHour = 0;
    int rMin = 0;

    rMin = m + due;
    rHour = h + (rMin / 60);
    rMin = rMin % 60;

    rHour = rHour % 24;
    cout << rHour << " " << rMin << endl;

    return 0;
}
