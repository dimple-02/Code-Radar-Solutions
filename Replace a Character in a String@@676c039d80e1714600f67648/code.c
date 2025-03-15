#include<stdio.h>
int main(){
    char st[12], ch;
    scanf("%s",&st);
    scanf(" %c", &ch1);
    scanf(" %c", &ch2);
    for(int i=0;st[i]!='\0';i++){
        if(st[i]==ch1 ){
            st[i]=ch2;
        }
    }
    printf("%s", &st);
    return 0;
}