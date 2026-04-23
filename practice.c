#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int i = get_int("Cuantas veces quiere repetir hola? ");
    for( int e = 0; e < i; i--)
    {
        printf("hola\n");
    }
}
