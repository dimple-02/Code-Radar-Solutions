#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n );
    int arr[n];
    for (int i=0; i<n;i++){
        int num;
        scanf("%d", &num);
        arr[i]=num;
    } for (int j=0;j<n; j++){
        if (arr[j] < arr[j+1]){
            printf("Sorted");
        }
    }
    return 0;
}
