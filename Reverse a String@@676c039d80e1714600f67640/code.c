#include<stdio.h>
int main(){
    char st[5];
    scanf("%s", &st);
    n=5;
    char st2[5];
    for(int i=0; i<n;i++){
        st[n-i]= st2[i];
    }
    printf("%s", st2);
    return 0;
}