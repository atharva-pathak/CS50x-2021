#include <cs50.h>
#include <stdio.h>

int main(void)
{

    //Take user input for starting size
    int start_size;
    do
    {
        start_size = get_int("Start size: ");
    }
    while (start_size < 9);


    //Take user input for end size
    int end_size;
    do
    {
        end_size = get_int("End size: ");
    }
    while (end_size < start_size);


    //Calculate the required number of years
    int years = 0;
    while (start_size < end_size)
    {
        years++;
        start_size = start_size + start_size / 3 - start_size / 4;

    }


    printf("Years: %i\n", years);
}