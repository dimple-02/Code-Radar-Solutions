#include<stdio.h>
int main(){
    char st1[5];
    scanf("%s", &st1);
    int count=0;
    for(int i=0;i<5;i++){
        if(st1[i]==st1[4-i]){
           count++;
        }
    } if(count==2){
        printf("Yes");
    } else{
        printf("No");
    }
    return 0;
}