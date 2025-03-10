#include<stdio.h>
int main(){
    char st[100];
    scanf("%s",&st);
    int count=0;
    for(int i=0;i<100;i++){
        if(st[i]=='a' || st[i]=='e' || st[i]=='i' || st[i]=='o' || st[i]=='u' || st[i]=='A' || st[i]=='E' || st[i]=='I' || st[i]=='O' || st[i]=='U' ){
            count++;
        }
    }printf("%d",count);
    return 0;
}