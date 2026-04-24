#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Columnas
    int NumeroAltura = get_int("Que altura tendra la piramide? ");
    for (int j = 0; j < NumeroAltura; ++j)
    {
        for(int i = 0; i < 5; ++i)
        {
            do
            {
            printf("#");
            }
            do
            {
                i += 1;
            }
            while (i == 5);
        }
        printf("\n");
    }
}
