#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Uso: ./substitution llave\n");
        return 1;
    }
    string key = argc[1]
    if(strlen(key) != 26)
    {
        prinf("Debe Contener 26 Caracteres\n");
        return 1;
    }

    string Palabra = get_string("Tu Palabra A Cifrar es..");

    for (int e = 0; e < strlen(Palabra); ++e)
    {
        if (islower(Palabra[e]))
        {
            Palabra[e] = key[e] - 'a'
        }
        if (isupper(Palabra[e]))
        {
            Palabra[e] = key[e] - 'A'
        }
    }
    printf("CipherText: %s\n", Palabra);
}
