#include <stdio.h>
#include <cs50.h>

int main(void)
{
  int i = get_int("introduzca su primer numero ");
  if (i < 0)
  {
    printf("Introduzca denuevo ");
    return 1;
  }
  int e = get_int("introduzca su segundo numero ");
  if (e < 0)
  {
    printf("Introduzca denuevo ");
    return 1;
  }
  char operador = get_char("Digame su operador +, - o *\n");
     if (operador == '+')
     {
        printf("su resultado es %i\n", i + e);
     }
     else if (operador == '-')
     {
    printf("su resultado es %i\n", i - e);
     }
     else
     {
        printf("su resultado es %i\n", i * e);
     }
}
