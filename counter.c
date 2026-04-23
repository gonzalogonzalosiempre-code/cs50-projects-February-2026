#include <stdio.h>
#include <cs50.h>

int main(void)
{
   int i = get_int("Cual es i? ");
   while (i < 0) {
    printf("Cual es i? ");
   }

   for (int e = 0; e < i; e++) {
    printf("hola\n");
   }
}

