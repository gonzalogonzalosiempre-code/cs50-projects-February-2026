#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Columnas
    int NumeroAltura = get_int("Que altura tendra la piramide? ");
    for ( int j = 0; j < NumeroAltura; ++j)
    {
      int e = 0;
      for (; e < 5; ++e)
      {
        printf("#");
      }
       printf("\n");
    }
}


