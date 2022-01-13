#include <stdio.h>

#define SWAP(a, b) do { typeof(a) temp = a; a = b; b = temp; } while (0)

int main(void)
{
    int a = 4, b = 5;
    float x = 4.0f, y = 5.0f;
    char *p1 = "Hello";
    char *p2 = "World";

    SWAP(a, b); // swap two ints, a and b
    SWAP(x, y); // swap two floats, x and y
    SWAP(p1, p2); // swap two char * pointers, p1 and p2

    printf("a = %d, b = %d\n", a, b);
    printf("x = %g, y = %g\n", x, y);
    printf("p1 = %s, p2 = %s\n", p1, p2);

    return 0;
}
