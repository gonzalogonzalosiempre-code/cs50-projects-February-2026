#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main(void)
{
    string KeyCifrado = get_string("Cifrado Key.. ");

    if (KeyCifrado < 26)
    {
        printf("El Cifrado Debe tener 26 Caracteres.\n");
    }
}
