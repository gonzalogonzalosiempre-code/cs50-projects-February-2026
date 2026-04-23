#include <stdio.h>
#include <cs50.h>

int main(void)
{
   int i = get_int("Cual es i? ");

   for (i = i; i < 3; i--) {
    printf("hola\n");
   }
}

