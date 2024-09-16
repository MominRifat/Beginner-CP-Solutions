#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        long long sum = 0;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i];
        }

        if (sum % n == 0) {
            long long target = sum / n;
            bool possible = true;
            long long excess = 0;

            for (int i = 0; i < n; ++i) {
                excess += (a[i] - target);

                if (excess != 0 && excess % (i + 1) != 0) {
                    possible = false;
                    break;
                }
            }

            cout << (possible ? "YES" : "NO") << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
