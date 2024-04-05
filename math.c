#include <stdio.h>

int main()
{
    float x, y;
    float addition, subtraction, multiplication, division;

    printf("Please, enter a number: ");
    scanf("%f", &x);

    printf("Please, enter another number: ");
    scanf("%f", &y);

    addition = x + y;
    subtraction = x - y;
    multiplication = x * y;
    division = x / y;

    printf("The basic operations of Math with your numbers =)\n\n");
    printf("%.2f + %.2f =\t%2.f\n", x, y, addition);
    printf("%.2f - %.2f =\t%2.f\n", x, y, subtraction);
    printf("%.2f / %.2f =\t%2.f\n", x, y, division);
    printf("%.2f * %.2f =\t%2.f\n", x, y, multiplication);

    return 0;
};