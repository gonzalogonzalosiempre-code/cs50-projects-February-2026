#include <stdlib.h>
#include <stdio.h>
#include <strings.h>

// result string must be a heap-allocated, nul-terminated string
// to be freed by the tests suite

char *likes(size_t n, const char *const names[n]);

int main (int argc, char *argv[])
{
   if (argc < 1)
  {
    printf("No one like this");
    return 0;
  }
  int Count_Names = argc - 1;
  char *names[Count_Names];
  int Count = 1;
  for (int i = 0; i <= Count_Names; ++i)
  {
    names[i] = argv[Count];
    Count++;
  }
  char *string = likes(Count_Names, (const char *const *)names); //Conversion de Tipos

  printf("%s", string);
  free(string);

}

char *likes(size_t n, const char *const names[n])// SIZE_T Obliga a solo recibir numeros positivos mas no negativos
{
  char *string = malloc(30 * sizeof(char));
    if (string == NULL)
    {
      return 0;
    }
    //  <----  hajime!
  if (n == 1)
  {
    sprintf(string, "%s likes this\n", names[0]);
    return string;
  }
  else if (n == 2)
  {
   sprintf(string, "%s, and %s, like this\n", names[0], names[1]); //Sprintf convierte o añade al string de mi buffer, otro string o int o variable
   return string;
  }
  else if (n == 3)
  {
    int Number = n - 2;
    sprintf(string, "%s, %s and %i others like this\n", names[0],names[1],Number);
    return string;
  }
  return string;
}
