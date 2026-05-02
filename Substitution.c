#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    string KeyCifrado = get_string("Cifrado Key..");

    int NumeroDeLetras = 0;
    for (int i = 0; i < strlen(KeyCifrado); ++i)
    {
      NumeroDeLetras ++;
      if (NumeroDeLetras < 26 || isdigit(KeyCifrado[i]) || ispunct(KeyCifrado[i]))
      {
        printf("El Numero De Caracteres debe de ser de 26, No Debe Tener Numeros, y Ninguna Letra Repetida.\n");
        return 1;
      }
    }

    string Palabra = get_string("Tu Palabra A Cifrar es..");

    for (int e = 0; e < strlen(Palabra); ++e)
    {
        if (islower(Palabra[e]))
        {
            Palabra[e] = KeyCifrado[e] - 'a'
        }
        if (isupper(Palabra[e]))
        {
            Palabra[e] = KeyCifrado[e] - 'A'
        }
    }
    printf("CipherText: %s\n", Palabra);
}
