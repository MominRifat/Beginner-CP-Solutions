#include <iostream>
using namespace std;

bool ans(int a) {
    int x = 2;
    while (true) {
        int n = 1;
        for (int i = 0; i < x; ++i) {
            n *= 10;  // Compute 10^x
        }
        n += x;  // Compute 10^x + x

        if (n == a) {
            return true;
        }
        if (n > 10000) {
            break;
        }
        ++x;
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a;
        cin >> a;
        if (ans(a)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
