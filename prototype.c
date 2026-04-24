#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int Altura = get_int("Ingrese la Altura deseada? ");
    for (int i = 1; i <= Altura; ++i)
    {
     for (int e = 1; e <= i; ++e)
     {
        printf("#");
     }
     printf("\n");
    }
}

