#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char *get_middle(char outp[3], const char *inp);

int main(void)
{
 char outp[3];
 char *string = malloc(10 * sizeof(char));
  if (string == NULL)
    {
    return 1;
  }
  printf("Ingrese su texto ");
  scanf("%s", string);
  char *middle = get_middle(&outp[3], string);
  printf("%s\n", middle);

}
char *get_middle(char outp[3], const char *inp)
{
  int Num = 0;
  int Longitud = strlen(inp);
   if (Longitud % 2 == 0 )
    {
     Num = Longitud / 2;
     outp[1] = inp[Num];
     outp[0] = inp[Num - 1];
   }
  else
    {
    Num = round(Longitud / 2);
    outp[0] = inp[Num];
  }
    return outp;
}
