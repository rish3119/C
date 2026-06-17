#include <stdio.h>

int main() {
    int a, b;
    float x, y;

    // Input: two integers
    scanf("%d %d", &a, &b);

    // Input: two floats
    scanf("%f %f", &x, &y);

    // Integer operations
    printf("%d %d\n", a + b, a - b);

    // Float operations (rounded to 1 decimal place)
    printf("%.1f %.1f\n", x + y, x - y);

    return 0;
}
