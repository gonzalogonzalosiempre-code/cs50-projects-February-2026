#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Columnas
    int NumeroAltura = get_int("Que altura tendra la piramide? ");
    for ( int j = 1; j < NumeroAltura; ++j)
    {
      for (int i = 0; i < j; ++i)
      {
        printf("#");
      }
       printf("\n");
    }
}


