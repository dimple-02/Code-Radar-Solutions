#include <stdio.h>
#include <string.h>
int main() {
    char str0[50]; 
    char str1[50];

    // Input strings
    fgets(str0, 50, stdin); 
    fgets(str1, 50, stdin);

    // Remove newline characters added by fgets (optional for cleaner concatenation)
    str0[strcspn(str0, "\n")] = '\0'; 
    str1[strcspn(str1, "\n")] = '\0';

    // Concatenate str1 to str0
    strcat(str0, str1); 

    // Print the result
    puts(str0);            

    return 0;
}
