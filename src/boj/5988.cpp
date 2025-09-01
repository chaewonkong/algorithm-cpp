#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n;
    
    for (int i=0; i < n; i++) {
        cin >> s;

        char c = s[s.size() -1];
        if ((c - '0') % 2 == 0) {
            cout << "even" << endl;
        } else {
            cout << "odd" << endl;
        }
    }

    return 0;
}