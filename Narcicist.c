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
 double n[5];
 int i = 0;
   while (copianum > 0)
  {
     n[i] = copianum % 10;
     i++;
     copianum = copianum / 10.0;
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
