#include<stdio.h>

struct rectangle {
    int l, b;
};

int main() {
    int n;
    scanf("%d", &n);
    struct rectangle rect[n];

    for(int i = 0; i < n; i++) {
        scanf("%d %d", &rect[i].l, &rect[i].b);
    }

    for(int i = 0; i < n; i++) {
        int area = rect[i].l * rect[i].b;
        int perimeter = 2 * (rect[i].l + rect[i].b);
        printf("Rectangle %d: Area = %d, Perimeter = %d\n", i + 1, area, perimeter);
    }

    return 0;
}
