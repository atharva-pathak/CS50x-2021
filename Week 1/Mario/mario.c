#include <stdio.h>
#include <cs50.h>

int main(void)
{

    //Take user input
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (0 >= n || n >= 9);

    //code to make the mario pyramid
    for (int i = 0; i < n; i++)
    {
        //for loop to print required spaces
        for (int j = 0; j < n - 1 - i; j++)
        {
            printf(" ");
        }

        //for loop to print the required #
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }

        //print new line
        printf("\n");
    }
}