#include <stdio.h>
#include <cs50.h>

int main(void)
{
   int Respuesta = get_int("Numero favorito? ");
   if (Respuesta < 10) {
    printf("Tienes un numero menor que 10\n");
   } else {
    printf("Tienes un numero mayor que 10\n");

   }

}

