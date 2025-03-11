#include<stdio.h>
int main(){
    char st1[7];
    scanf("%s", &st1);
    char st2[7];
    for(int i=0;st1[i]='\0';i++){
        st1[i]=st2[sizeof(st1)-i];
        
    } if(st1==st2){
        printf("Yes");
    } else{
        printf("No");
    }
    return 0;
}