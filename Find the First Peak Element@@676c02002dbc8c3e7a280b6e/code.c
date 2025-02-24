#include <stdio.h>

int main() {
    int n; int arr1[n];
    scanf("%d", &n);
    for(int i =0; i<n;i++){
        int num;
        scanf("%d",num);
        arr1[i]=num;
    } for (int j=0;j<n;j++){
        if(arr1[j]<arr1[j-1] || arr1[j] < arr1[j+1]){
            int x=0;
        }
    } if (sorted){
         printf("%d", arr1[j]);
    }
    return 0;
}