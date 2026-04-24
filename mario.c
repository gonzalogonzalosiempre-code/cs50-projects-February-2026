#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Columnas
    int NumeroAltura = get_int("Que altura tendra la piramide? ");
    int j;
    for ( j = 0; j < 1; ++j)
    {
       for (int i = 0; i < NumeroAltura; ++i)
       {
     do
     {
        printf("#");
            j += 1;
     }
     while(j < 5);
     }
        printf("\n");
       }
}

