#include<stdio.h>
int main(){
    char st[5];
    scanf("%s",&st);
    int count=0;
    for(int i=0;i<5;i++){
        if(st[i]=='a' || st[i]=='e' || st[i]=='i' || st[i]=='o' || st[i]=='u'){
            count++;
        }
    }printf("%d",count);
    return 0;
}