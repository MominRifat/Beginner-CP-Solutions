#include <stdio.h>
#include <string.h>

int main() {
    char input[1000]; // Buffer to hold the input string
    char longest[1000] = "";
    int longestLength = 0;

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Remove trailing newline character from fgets
    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    int n = strlen(input);

    // Iterate over all possible lengths of substrings
    for (int length = 1; length <= n; ++length) {
        // Check each substring of the current length
        for (int i = 0; i <= n - length; ++i) {
            char current[1000];
            strncpy(current, input + i, length);
            current[length] = '\0'; // Null-terminate the substring

            // Check if the current substring repeats
            for (int j = i + 1; j <= n - length; ++j) {
                if (strncmp(current, input + j, length) == 0) {
                    if (length > longestLength) {
                        longestLength = length;
                        strncpy(longest, current, length);
                        longest[length] = '\0'; // Null-terminate the longest substring
                    }
                }
            }
        }
    }

    if (longestLength > 0) {
        printf("Longest repeating substring: %s\n", longest);
    } else {
        printf("No repeating substring found\n");
    }

    return 0;
}
