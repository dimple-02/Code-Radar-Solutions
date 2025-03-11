#include<stdio.h>
#include<string.h>
int main(){
    char st1[7];
    scanf("%s", &st1);
    char st2[7];
    int len = strlen(st1);
    for(int i=0;i<len;i++){
        st1[i]=st2[len-i-1];
        
    }  st2[len] = '\0';
    if(strcmp(st1,st2)==0)
    {
        printf("Yes");
    } else{
        printf("No");
    }
    return 0;
}