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
 char buffer[5];
 sprintf(buffer, "%i", num);
 double n[5];
 int i = 0;
   while (num > 0)
  {
     n[i] = num % 10;
     i++;
     n[i] = n[i] / 10.0;
   }
  int Total = 0;
  double Resultado[strlen(buffer)];
  double longitud = strlen(buffer);
  for (int e = 0; i < longitud; ++i)
  {
    Resultado[i] = pow(n[i],longitud);
    Total += Resultado[i];
  }
  if ( Total == num )
    {
    printf("IS Narcicist!\n");
    return true;
  }
  else
    {
    return false;
  }
    return false;
}
