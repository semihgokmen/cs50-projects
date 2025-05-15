#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

// not a good code, it works with integers, no decimals;

int addition(int x, int y);
int subtraction(int x, int y);
int multiplication(int x, int y);
int division(int x, int y);
int modulus(int x, int y);

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    printf("x+y: %i\n",addition(x,y));
    printf("x-y: %i\n",subtraction(x,y));
    printf("x*y: %i\n",multiplication(x,y));
    printf("x/y: %i\n",division(x,y));
    printf("x%%y: %i\n",modulus(x,y));
}

int addition(int x, int y)
{
    return x + y;
}

int subtraction(int x, int y)
{
    return abs(x - y);
}

int multiplication(int x, int y)
{
    return x * y;
}

int division(int x, int y)
{
    return x / y;
}

int modulus(int x, int y)
{
    return x % y;
}
