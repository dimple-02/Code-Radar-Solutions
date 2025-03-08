#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr1[n];
    for(int i=0; i<n;i++){
        scanf("%d", arr1[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr1[i];
        printf("%d", sum);
    }
    return 0;
}