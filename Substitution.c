#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string KeyCifrado = get_string("Cifrado Key..");

    for (int i = 0; i < strlen(KeyCifrado); ++i)
    {
      int NumeroDeLetras ++;
      if (NumeroDeLetras < 26)
      {
        printf("El Numero De Caracteres debe de ser de 26\n");
      }
    }

    for (int e = 0; e < strlen(KeyCifrado); ++e)
    {
       
    }
}
