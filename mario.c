#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int NumeroAltura;
    do
    {
     NumeroAltura = get_int("Que altura tendra la piramide? ");
     if ( NumeroAltura < 0)
     {
       NumeroAltura = get_int("Ingrese un dato valido: ");
     }
    }
    while(NumeroAltura < 0);
    for ( int j = 1; j < NumeroAltura; ++j)
    {
      for (int i = 0; i < j; ++i)
      {
        printf("#");
      }
       printf("\n");
    }
}


