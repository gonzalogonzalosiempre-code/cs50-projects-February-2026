#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

bool narcissistic(int num);

int main(void)
{
 int Number;
  printf("Ingrese su Numero ");
  scanf("%i", &Number);
  narcissistic(Number);
}

bool narcissistic(int num)
{
 int copianum = num;
 char buffer[5];
 sprintf(buffer, "%i", num);
 int longitud = strlen(buffer);
 int Total = 0;
   while (copianum > 0)
  {
     int Digito = copianum % 10;
     Total += pow(Digito, longitud);
     copianum = copianum / 10.0;
   }
  if ( Total == num )
    {
    printf("IS Narcicist!\n");
    return true;
  }
  else
    {
    printf("No es\n");
    return false;
  }
    return false;
}
