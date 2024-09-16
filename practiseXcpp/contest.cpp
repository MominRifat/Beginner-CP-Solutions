// Created By Momin_Rifat
#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string initial_state, desired_state;
        cin >> initial_state >> desired_state;
        int move_operations = 0;

        for (int i = 0; i < n; ++i) {
            if (initial_state[i] != desired_state[i]) {
                move_operations++;
            }
        }

        cout << move_operations << endl;
    }

    return 0;
}
