#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        int sum = 0, num = arr[i] < 0 ? -arr[i] : arr[i];

        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }

        printf("%d ", sum);
    }
    
    return 0;
}

