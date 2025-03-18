#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int arrSum[n];
    for(int i =0 ; i<n;i++){
        int sum=0;
        for(int j=0;i>0;j++){
            int x= arr[i]%10;
            sum =sum+x;
            arr[i]=arr[i]/10;
        }  arrSum[i]= sum;
    } 
     for(int i = 0; i < n; i++)
        printf("%d ", arrSum[i]);
    return 0;
}