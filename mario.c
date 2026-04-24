#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Columnas
    int NumeroAltura = get_int("Que altura tendra la piramide? ");
    for (int j = 0; j < 1; ++j)
    {
       for (int i = 0; i < NumeroAltura; ++i)
       {
     while(true)
     if (j < 5)
     {
        printf("#");
            j += 1;
     } else {
        break;
     }
        printf("\n");
       }
     }
}
