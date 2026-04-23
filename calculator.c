#include <stdio.h>
#include <cs50.h>

int main(void)
{
  int i = get_int("introduzca su primer numero ");
  if (i < 0)
  {
    printf("Introduzca denuevo ");
    return;
  }
  int e = get_int("introduzca su segundo numero ");
  if (e < 0)
  {
    printf("Introduzca denuevo ");
    return;
  }
  char operador = get_char("Digame su operador +, - o *\n");
     if (operador == int )
     {
        printf("No es un operador ")
     }
}
