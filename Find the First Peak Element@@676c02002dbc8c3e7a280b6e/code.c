#include <stdio.h>

int main() {
    int n , arr1[n], x,j;
    scanf("%d", &n);
    for(int i =0; i<n;i++){
        int num;
        scanf("%d",num);
        arr1[i]=num;
    } for (j=0;j<n;j++){
        if(arr1[j]<arr1[j-1] || arr1[j] < arr1[j+1]){
            x=0;
        }
    } if (x){
         printf("%d", arr1[j]);
    }
    return 0;
}