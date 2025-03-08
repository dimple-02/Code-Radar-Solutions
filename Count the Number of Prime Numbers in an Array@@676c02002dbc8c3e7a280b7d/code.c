#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr1[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr1[i]);
    }
    int factors=0;
    for(int i=0; i<n;i++){
        int count=0;
        for(int j=0; j<arr1[i] ; j++){
            if(arr1[i]%j==0){
                count++;
            }
        } if(count==2){
            factors++;
        } 
    } printf("%d", factors);
}