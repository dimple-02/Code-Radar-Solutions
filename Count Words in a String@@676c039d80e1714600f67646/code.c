#include<stdio.h>
#include<string.h>

int main(){
    char st[100]; int count=1;
    fgets(st,sizeof(st),stdin);
    st[strcspn(st,"\n")] ='\0';
    int len= strlen(st);
    for(int i=0;i<len;i++){
        if(st[i]==' '){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}