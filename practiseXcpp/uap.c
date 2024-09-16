#include <stdio.h>
#include <stdbool.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    // Initialize a 2D array to store the probabilities
    bool dp[X + 1][Y + 1];

    // Base case: It's always possible to get a sum of 0 with 0 throws
    dp[0][0] = true;

    // Calculate probabilities for each possible sum
    for (int throws = 1; throws <= X; throws++) {
        for (int sum = 0; sum <= Y; sum++) {
            dp[throws][sum] = false;
            for (int face = 1; face <= 6; face++) {
                if (sum >= face) {
                    dp[throws][sum] |= dp[throws - 1][sum - face];
                }
            }
        }
    }

    // Check if the predetermined sum Y is achievable
    if (dp[X][Y]) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
