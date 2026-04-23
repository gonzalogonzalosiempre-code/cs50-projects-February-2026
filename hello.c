#include <stdio.h>
#include <ctype.h>
#include <cs50.h>

int main(void)
{
    int c = get_int("Su edad es? ");
    if (isalpha(c)) {
        printf("Su respuesta no es un numero. %c\n", c);
    }   else {
        printf("Su edad es un numero. %c\n", c);
    }
    return 0;
}

