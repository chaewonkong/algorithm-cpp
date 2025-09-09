#include <iostream>
#include <cassert>
#include <vector>
#include <algorithm>
#include <string>


using namespace std;

int binary_search(const vector<int>& A, int x){
    int lo = -1, hi = A.size();

    // lo < hi
    // A[lo] < x <= A[hi]
    while (lo + 1 < hi) {
        int mid = (lo + hi) / 2;

        if (A[mid] < x) {
            lo = mid;
        } else {
            hi = mid;
        }
    }

    return hi;
}

int main() {
    vector<int> arr = {1, 3, 24, 55, 58, 1234};
    int target = 55;

    int ret = binary_search(arr, target);
    assert(ret == 3);

    arr = {};
    target = 10;
    assert(binary_search(arr, target) == 0);

    arr = {1};
    target = 1;
    assert(binary_search(arr, target) == 0);


    return 0;
}