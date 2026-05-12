#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
bool solution(const char *string, const char *ending);
char * PrimerString(void);
char * EndingString(void);

int main(void)
{
 char *S = PrimerString();
 char *E = EndingString();
 solution(S, E);
 if (solution(S, E) == true)
   {
   printf("true\n");
 }
  else
  {
    printf("false\n");
  }


}

bool solution(const char *string, const char *ending)
{
   if (strlen(string) > 1)
   {
      if (strlen(ending) == 1)
      {
       return false;
      }
     else
     {
       return true;
     }
   }
   else
   {
    return false;
   }
}

char * PrimerString(void)
{
  char *string = malloc(4 * sizeof(char));
  printf("First string: ");
  scanf("%s", string);
  return string;
}
char * EndingString(void)
{
  char *Ending = malloc(4 * sizeof(char));
   printf("Ending String: ");
   scanf("%s", Ending);
  return Ending;
}
