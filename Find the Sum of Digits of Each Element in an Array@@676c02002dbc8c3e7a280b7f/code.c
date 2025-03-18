#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], arrSum[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        int sum = 0, num = arr[i];
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        arrSum[i] = sum;
    } 

    for(int i = 0; i < n; i++) {
        printf("%d ", arrSum[i]);
    }
    
    return 0;
}
