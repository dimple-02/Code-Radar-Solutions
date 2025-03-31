#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    } int max=arr[0],min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[0]>arr[i]){
            min=arr[i];
        }
    } printf("%d ", min);
    for(int i=0;i<n;i++){
        if(arr[0]<arr[i]){
            max=arr[i];
        }
    } printf("%d", max);
    return 0;
}