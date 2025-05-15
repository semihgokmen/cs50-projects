#include <stdio.h>
#include <cs50.h>

// prototype of function
void meow(int);

int main(void)
{
    int times;

    // get user input with do-while loop until its correct
    do
    {
        times = get_int("How many times do you want the cat to meow? ");
    }
    while (times < 1);

    // with while loop
    int i = 0;
    while (i < times)
    {
        printf("meow ");
        i++;
    }

    printf("\n");

    // with for loop
    for (int j = 0; j < times; j++)
    {
        printf("meow ");
    }

    printf("\n");

    // with meow function
    meow(times);
}

void meow(int times)
{
    for (int i = 0; i < times; i++)
    {
        printf("meow ");
    }
    printf("\n");
}
