#include <stdio.h>
#include <cs50.h>

int main(void)
int i;
  do
  {
    i = get_int("introduzca su segundo numero ");
    if(i < 0){
        printf("Incorrecto Introduzca un numero diferente ");
    }
  }
  while(i < 0);

  int e;
  do
  {
    e = get_int("introduzca su segundo numero ");
    if(e < 0){
        printf("Incorrecto Introduzca un numero diferente ");
    }
  }
  while(e < 0);

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
