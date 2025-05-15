#include <cs50.h>
#include <stdio.h>

void print_hash(int n, int m);

int main(void)
{
    int height;

    do
    {
        height = get_int("Enter an integer between 1 and 8: ");
    }
    while (height < 1 || height > 8);

    int m = height - 1;
    while (m >= 0)
    {
        // print spaces for left side
        for (int i = 0; i < m; i++)
        {
            printf(" ");
        }

        // print # for left side
        print_hash(height, m);

        // space between left side and right side
        printf("  ");

        // print # for right side
        print_hash(height, m);

        printf("\n");
        m--;
    }
}

// print # function
void print_hash(int n, int m)
{
    for (int i = 0; i < n - m; i++) // (n - m) means current row
    {
        printf("#");
    }
}
