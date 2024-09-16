#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> trace(n);
        for (int i = 0; i < n; i++) {
            cin >> trace[i];
        }

        string result;
        int next_char = 0;

        for (int i = 0; i < n; i++) {
            if (trace[i] > next_char) {
                result += result[trace[i] - 1];
            } else {
                result += 'a' + next_char++;
            }
        }

        cout << result << "\n";
    }

    return 0;
}
