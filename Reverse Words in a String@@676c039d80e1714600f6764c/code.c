#include<stdio.h>
int main(){
    char st1[100]; char st2[100];
    scanf("%s %s", &st1, &st2);
    char st11[100] , st22[100];
    for(int i=0;st1=='\0';i++){
        st1[i] = st11[sizeof(st1)-1-i];
    }
    for(int i=0;st2=='\0';i++){
        st2[i] = st22[sizeof(st2)-1-i];
    }
    printf("%s %s", st11, st22);
    return 0;
}