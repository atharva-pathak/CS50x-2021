#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{

    //Take user input
    float dollars;
    do
    {
        dollars = get_float("Change owed: ");
    }
    while (0 >= dollars);

    //converting dollars to cents and initializing counter
    int cents = round(dollars * 100);
    int count = 0;

    //check if we can give a quarter as the largest change
    while (cents >= 25)
    {
        cents = cents - 25;
        count = count + 1;
    }

    //check if we can give a dime as the largest change
    while (cents >= 10)
    {
        cents = cents - 10;
        count = count + 1;
    }

    //check if we can give a nickel as the largest change
    while (cents >= 5)
    {
        cents = cents - 5;
        count = count + 1;
    }

    //check if we can give a penny as the largest change
    while (cents >= 1)
    {
        cents = cents - 1;
        count = count + 1;
    }

    //print the output to user
    printf("%i\n", count);
    printf("\n");
}