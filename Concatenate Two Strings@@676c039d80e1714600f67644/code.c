#include <stdio.h>
#include<string.h>
int main() {
    char str0[50]; char str1[50];
    fgets(str0, 50, stdin); 
    fgets(str1, 50, stdin); 
    char str2[50] = strcat(str0, str1);

    puts(str2);            
    return 0;
}
