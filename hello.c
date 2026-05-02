#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string nombre = get_string("Your name is? ");
    printf("Hello %s\n", nombre);
}

