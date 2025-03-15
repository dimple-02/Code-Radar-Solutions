#include<stdio.h>
#include<string.h>
 void removeSpaces(char *str)
{
    int count = 0;
    for (int i = 0; str[i]; i++)
        if (str[i] != ' ')
            str[count++] = str[i]; 
    str[count] = '\0';
}
int main(){
   char st[50];
   fgets(st,50,stdin);
   removeSpaces(st);
   int len=strlen(st);
   char st2[50];
   for(int i=0;i<len;i++){
    st[i]=st[n-i-1];
   }
   if (strcmp(st1,st2)){
    printf("Yes");
   } else("No");
    return 0;
}