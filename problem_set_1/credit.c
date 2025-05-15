#include <cs50.h>
#include <stdio.h>
int main(void)
{
    long card_number = get_long("Enter your card number: ");

    int sum = 0;
    int sum1 = 0;
    int counter = 1;
    int remain;
    int first_two_digit;
    int length = 0;

    while (card_number > 0)
    {
        remain = card_number % 10;
        card_number = card_number / 10;

        if (counter % 2 == 0)
        {
            if (remain * 2 < 10)
            {
                sum += remain * 2;
            }
            else
            {
                sum += (remain * 2) / 10 + (remain * 2) % 10;
            }
        }
        else
        {
            sum1 += remain;
        }
        if (card_number < 100 && card_number > 9)
        {
            first_two_digit = card_number;
        }

        counter++;
        length++;
    }

    int sum_total = sum + sum1;
    bool isLegit = false;

    if (sum_total % 10 == 0)
    {
        isLegit = true;
    }

    if (isLegit)
    {
        if(remain == 4 && (length == 13 || length == 16) )
        {
            printf("VISA\n");
        }
        else if(first_two_digit >= 51 && first_two_digit <= 55 && length == 16)
        {
            printf("MASTERCARD\n");
        }
        else if((first_two_digit == 34 || first_two_digit == 37) && length == 15)
        {
            printf("AMEX\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}


