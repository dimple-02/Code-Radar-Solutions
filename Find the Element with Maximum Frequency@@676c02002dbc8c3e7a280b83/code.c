// Your code here...#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int freq[n];
    for(int i=0;i<n;i++){
        freq[i]=-1;
    }
    for(int i=0;i<n;i++){
        int count = 1;
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                count++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0){
            freq[i]=count;
        }
    }
    int max=freq[0];
    for(int i=0;i<n;i++){
        if(freq[i]>freq[0]){
            freq[0]=freq[i];
        }
    }
    printf("%d", freq[0]);
    return 0;
}