#include <stdio.h>
#include <cs50.h>
int main(void)
{
   int x = get_int("What's x? ");
   int y = get_int("What's y? ");

   if (x < y)
   {
    printf("y is greater than x\n");
   }
   else if (y < x)
   {
    printf("x is greater than y\n");
   }
   else
   {
    printf("x equals y\n");
   }
}
