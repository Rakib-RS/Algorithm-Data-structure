#include <stdio.h>

int main()
{
    double bas, da, hra, gross;
    printf("Enter base salary: ");
    scanf("%lf", &bas);
    da = 0.4 * bas;
    hra = 0.2 * bas;
    gross = bas + da + hra;
    printf("gross salary is: %lf\n", gross);
    return 0;
}
