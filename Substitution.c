#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    //Confirmamos que el usuario escriba su respuesta.
    if (argc != 2)
    {
        printf("Uso: ./substitution llave\n");
        return 1;
    }
    string key = argv[1];
    //Creamos una cadena de caracteres para la respuesta, para comprobar si tiene 26 caracteres.
    if(strlen(key) != 26)
    {
        printf("Debe Contener 26 Caracteres\n");
        return 1;
    }
    //Pedimos la palabra a cifrar
    string Palabra = get_string("plaintext:  ");
    printf("CipherText: ");


    //Usamos for para buscar la posicion en el array de Key y imprimir cada linea dependiendo de donde se encuentre para convertir la letra
    for (int e = 0; e < strlen(Palabra); ++e)
    {
        if (islower(Palabra[e]))
        {
            int Posicion = Palabra[e] - 'a';
            printf("%c", tolower(key[Posicion]));
        }
        if (isupper(Palabra[e]))
        {
            int Posicion = Palabra[e] - 'A';
            printf("%c", toupper(key[Posicion]));
        }
        else
        {
          printf("%c", (key[Posicion]));
        }
    }
    printf("\n");
    return 0;
}
