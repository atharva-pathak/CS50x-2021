#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("Whats is your name?\n"); //This takes user input
    printf("hello, %s\n", name);
}