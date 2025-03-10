#include <stdio.h>

int main() {
    int n, x = 1;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int j = 1; j < n; j++) {
        if (arr[j] < arr[j - 1]) {
            x = 0;
            break;
        }
    }

    if (x == 1) {
        printf("%d", arr[n - 1]);  // Print last element if sorted
    } else {
        printf("-1");  // Print -1 if not sorted
    }

    return 0;
}

