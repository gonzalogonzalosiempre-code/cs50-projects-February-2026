#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
bool validate_pin(const char *pin);

int main(void)
{
  char *Num = malloc(7 * sizeof(char));
  if (Num == NULL)
    {
    return 1;
  }
  printf("Ingrese su PIN ");
  scanf("%s", Num);
  validate_pin(Num);
}

bool validate_pin(const char *pin)
{
  if (strlen(pin) == 4 || strlen(pin) == 6)
    {
    printf("Valid PIN\n");
    return true;
  }
  else
    {
    printf("Invalid PIN\n");
    return false;
  }
  return false;
    //  <----  hajime!
}
