#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What's your name? "); // get user input;

    printf("Hello, %s\n", name); // %s for string, \n for new line;
}
