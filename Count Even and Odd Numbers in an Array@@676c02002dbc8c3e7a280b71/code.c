#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr1[n];
    for(int i=0; i<n;i++){
        scanf("%d", &arr1[i]);
    }
    int odd=0;
    int even=0;
    for(int i=0; i<n; i++){
        if(arr1[i]%2==0){
            even++;
        } else{
            odd++;
        }
    } printf("%d %d", even, odd);
}