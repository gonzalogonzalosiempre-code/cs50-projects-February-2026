#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string KeyCifrado = get_string("Cifrado Key..");

    char Codigos[];
    int NumeroDeLetras = 0;
    for (int i = 0; i < strlen(KeyCifrado); ++i)
    {
      Codigos[i] == KeyCifrado[i];
      NumeroDeLetras ++;
      for (int e = 0; e < strlen(KeyCifrado); ++i)
      if (NumeroDeLetras < 26 || Codigos[e] == KeyCifrado[i])
        printf("El Numero De Caracteres debe de ser de 26\n");
      }
    }

    string Palabra = get_string("Tu Palabra A Cifrar es..");
}
