#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Columnas
    int NumeroAltura = get_int("Que altura tendra la piramide? ");
    for ( int j = 0; j < NumeroAltura; ++j)
    {
        int i;
        do
       {
        for ( i = 0; i < 5; --i)
        printf("#");
       }
       while(i < 5);
       printf("\n");
    }
}


