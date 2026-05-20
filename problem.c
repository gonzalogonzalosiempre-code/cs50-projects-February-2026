#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long *tribonacci(const long long *signature[3], size_t n);

int main (void)
{
  long long *signatur[3] = {0};
  for (int i = 0; i <= 2; ++i)
    {
    printf("Ingrese Su %i numero: ", i);
    scanf("%lli", signature[i]);
  }
  size_t n;
  printf("Ingrese su Numero N: ");
  scanf("%zi", &n);

  long long *Resultado = tribonacci(signatur, n);

  for (size_t i = 0; i <= n; ++i)
    {
    printf("%lli ", Resultado[i]);
    }
}

long long *tribonacci(const long long *signature[3], size_t n) {

  long long *Nuevo = malloc(n * sizeof(long long));
  if (Nuevo != NULL)
    {
    for (size_t i = 0; i <= 3; ++i)
      {
      Nuevo[i] = signature[i];
    }
  }
  for (size_t i = 3; i <= n; ++i)
    {
    Nuevo[i] = Nuevo[i-1] + Nuevo[i-2] + Nuevo[i-3];
  }

    //  <----  inizio!
    //  return a dynamically allocated array with `n` elements:
    return Nuevo;
}
