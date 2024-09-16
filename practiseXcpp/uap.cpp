#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        vector<int> rightmost(n + 1, -1);

        // Find the rightmost occurrence of each element
        for (int i = 0; i < n; ++i) {
            rightmost[arr[i]] = i;
        }

        int penalty = 0;
        int left_end = -1;

        // Traverse the array
        for (int i = 0; i < n; ++i) {
            // Check if the current element is to the left of the leftmost occurrence so far
            if (rightmost[arr[i]] > left_end) {
                penalty++;
                left_end = rightmost[arr[i]];
            }
        }

        cout << penalty << endl;
    }

    return 0;
}
