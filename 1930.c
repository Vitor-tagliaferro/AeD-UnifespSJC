#include <stdio.h>

int main() {
    int a, b, c, d, n;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    a-=1;
    b-=1;
    c-=1;
    n = a + b + c + d;

    printf("%d\n", n);
    return 0;
}
