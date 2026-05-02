#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string nombre = get_string("Your name is? ");
    printf("hello, %s\n", nombre);
}

