#include<stdio.h>
int main(){
    int n; int arr1[n]; int num; int x;
    scanf("%d", n);
    for(int i=0; i<n; i++){
        scanf("%d" , &num);
        arr1[i]= num;
    } 
    scanf("%d", &k);
    k = k % n;
    for (int i = n - k; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    for (int i = 0; i < n - k; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}