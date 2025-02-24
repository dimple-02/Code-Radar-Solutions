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

    printf(x ? "Sorted\n" : "Not Sorted\n");
    
    return 0;
}
