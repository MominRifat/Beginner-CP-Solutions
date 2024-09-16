#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        int boxes[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &boxes[i]);
        }

        for (int i = 0; i < n - 1; i++) {
            int min_index = i;
            for (int j = i + 1; j < n; j++) {
                if (boxes[j] < boxes[min_index]) {
                    min_index = j;
                }
            }

            if (min_index != i) {
                int temp = boxes[min_index];
                boxes[min_index] = boxes[i];
                boxes[i] = temp;
            }
        }

        int is_possible = 1; // 1 represents true

        for (int i = 1; i < n; i++) {
            if (boxes[i] < boxes[i - 1]) {
                if (i + k - 1 >= n) {
                    is_possible = 0;
                    break;
                }

                // Reverse the unsorted part
                for (int j = i; j < i + k; j++) {
                    int temp = boxes[j];
                    boxes[j] = boxes[i + k - 1];
                    boxes[i + k - 1] = temp;
                    k--;
                }

                break; // Sorting completed after reversal
            }
        }

        if (is_possible) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
