#include <stdio.h>
#include <cs50.h>

int main(void)
{
  string respueta = get_string("Su Nombre es? ");
  printf("Hola %s Como estas?\n", respueta);
}

