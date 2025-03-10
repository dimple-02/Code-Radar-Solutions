#include <stdio.h>

int main() {
    int n, x = 1;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
int j;
    for ( j = 1; j < n; j++) {
        if (arr[j] < arr[j - 1]) {
            x = 0;
            break;
        }
    }
if (arr[j==arr[j-1]]){
    printf(-1);
}else{
    printf("%d", arr[j-1]);
} return 0;
}
