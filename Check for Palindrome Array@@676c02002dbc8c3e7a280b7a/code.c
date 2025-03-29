#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int rev[n];
    for(int i=0;i<n;i++){
        rev[i]=arr[n-1-i];
    }
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]==rev[i]){
          count++;
        }
    }
    if(count==n){
      printf("YES");
    }
    else{
      printf("NO");
    }
    return 0;
}