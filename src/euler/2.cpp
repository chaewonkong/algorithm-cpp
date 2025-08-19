#include <iostream>

using namespace std;

long long sum_even_fibonacci_up_to(long long n) {
    long long sum = 0;

    long long a = 1, b = 2;
    while (b <= n) {
        if (b % 2 == 0) {
            sum += b;
        } 

        long long next = a + b;
        a = b;
        b = next;
    }

    return sum;
}

const int MAX = 4000000;
int main() {
    cout << sum_even_fibonacci_up_to(MAX) << endl;

    return 0;
}