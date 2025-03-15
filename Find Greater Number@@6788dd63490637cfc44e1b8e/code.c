#include<stdio.h>
int main(){
    int n, m;
    scanf("%d %d", &n,&m);
    (n>m) ? printf("%d", n) : printf("%d", m);
    return 0;
}