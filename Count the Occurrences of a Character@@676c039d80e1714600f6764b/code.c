#include<stdio.h>
#include<string.h>
int main(){
    char st[15], ch;
    scanf("%s", &st);
    scanf("%c", &ch);
    int len= strlen(st);
    int count=0;
    for(int i=0; i<len;i++){
        if(st[i]==ch){
            count++;
        }
    } printf("%d", count);
    return 0;
}