#include <iostream>

int main() {
    int S, T;
    std::cin >> S >> T;

    int count = 0;

    for (int a = 0; a <= S; ++a) {
        for (int b = 0; b <= S - a; ++b) {
            int c = S - a - b;
            if (a * b * c <= T && a + b + c <= S) {
                count++;
            }
        }
    }

    std::cout << count << std::endl;

    return 0;
}
