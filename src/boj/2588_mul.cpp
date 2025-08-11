#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    std::string line;
    int first;
    std::string second;

    std::cin >> first;
    std:: cin >> second;



    // 두번째 입력의 각 문자를 순회하며 => int로 파싱 후 첫번째 입력과 곱셈 => 문자열로 출력 + 메모리에 add
    std::string reversed = second;
    std::reverse(reversed.begin(), reversed.end());

    for (char c : reversed) {
        if (c == '0') {
            // 0이면 000 출력
            std::cout << "0\n";
            continue;
        }
        

        int n = c - '0';
        int tmp = first * n;

        // print
        std::cout << std::to_string(tmp) << std::endl;
    }
    // 마지막에 결과 출력
    int ret = first * std::stoi(second);
    std::cout << std::to_string(ret) << std::endl;

    return 0;
}

// 함정카드: 0이 있는 케이스 고려