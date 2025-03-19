#include<stdio.h>
#include<string.h>
struct rectangle{
    int l,b;
};
int main(){
    int n;
    scanf("%d",&n);
    struct rectangle rect[n];
    for(int i=0;i<n;i++){
        scanf("%d",rect[i].l);
        scanf("%d",rect[i].b);
    }
    for(int i = 0; i < n; i++) {
        float area = rect[i].l * rect[i].b;
        float perimeter = 2.0 * (rect[i].l + rect[i].b);
        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f\n", i + 1, area, perimeter);
    }

}