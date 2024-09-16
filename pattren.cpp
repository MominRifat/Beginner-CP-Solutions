#include <stdio.h>

#define MAX_HEIGHT 100005

int main() {
    int n;
    scanf("%d", &n);

    int wallMaria[MAX_HEIGHT] = {0};
    int wallRose[MAX_HEIGHT] = {0};
    int wallSina[MAX_HEIGHT] = {0};

    // Read heights of sections for Wall Maria
    for (int i = 0; i < n; ++i) {
        int height;
        scanf("%d", &height);
        wallMaria[height] = 1;
    }

    // Read heights of sections for Wall Rose
    for (int i = 0; i < n; ++i) {
        int height;
        scanf("%d", &height);
        wallRose[height] = 1;
    }

    // Read heights of sections for Wall Sina
    for (int i = 0; i < n; ++i) {
        int height;
        scanf("%d", &height);
        wallSina[height] = 1;
    }

    int maxHeight = -1;
    // Check for common heights
    for (int i = 1; i < MAX_HEIGHT; ++i) {
        if (wallMaria[i] && wallRose[i] && wallSina[i]) {
            maxHeight = i;
        }
    }

    printf("%d\n", maxHeight);

    return 0;
}
