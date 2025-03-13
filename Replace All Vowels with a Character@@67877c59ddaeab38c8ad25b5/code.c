#include<stdio.h>
int main(){
    char st[6], ch;
    scanf("%s",&st);
    scanf("%c", &ch);
    for(int i=0;i<n;i++){
        if(st[i]=='a' || st[i]=='e' || st[i]=='i' || st[i]=='o' || st[i]=='u' || st[i]=='A' || st[i]=='E' || st[i]=='I' || st[i]=='O' || st[i]=='U' ){
            st[i]=ch;
        }
    }
    printf("%s", &st);
    return 0;
}