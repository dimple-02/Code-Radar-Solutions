#include<stdio.h>

struct rectangle {
    float l, b;
};

int main() {
    int n;
    scanf("%d", &n);
    struct rectangle rect[n];

    for(int i = 0; i < n; i++) {
        scanf("%f %f", &rect[i].l, &rect[i].b);
    }

    for(int i = 0; i < n; i++) {
        int area = rect[i].l * rect[i].b;
        int perimeter = 2 * (rect[i].l + rect[i].b);
        printf("Rectangle %d: Area = %f, Perimeter = %f\n", i + 1, area, perimeter);
    }

    return 0;
}
