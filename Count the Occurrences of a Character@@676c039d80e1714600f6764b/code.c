#include<stdio.h>
int main(){
    char st[5], ch;
    scanf("%s", &st);
    scanf("%c", &ch);
    int count=0;
    for(int i=0; i<5;i++){
        if(st[i]=='l'){
            count++;
        }
    } printf("%d", count);
    return 0;
}