#include <stdio.h>
int main() {
    float x = 2.4;
    float y = -9.3;
    float z;

    if (x > y && y > 0)
        z = x * x - y * y;
    else if (x > y && y < 0)
        z = x * y;
    else if (x < y && y > 0)
        z = x + y;
    else
        z = x;

    printf("z = %.5f", z);

    return 0;
}