#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Columnas
    int NumeroAltura = get_int("Que altura tendra la piramide? ");
    for (int j = 0; j < NumeroAltura; ++j)
    {
        for(int i = 0; i < 1; ++i)
        {
            do
            {
                i += 1;
                printf("#");
                printf("\n");
            }
            while (i == 5);
        }
    }
}
