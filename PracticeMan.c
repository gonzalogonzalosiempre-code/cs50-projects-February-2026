#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

char *order_words (char *ordered, const char *words[]);

int main(void)
{
  char *words[];
  char String[100];
  printf("Ingrese su texto ");
  scanf("%s", String);
  int count = 0;
  for (int i = 0; i <= strlen(String); ++i)
  {
    if (isspace(String[i]))
      {
      count++;
      }
    else
    {
      words[count] = String[i];
    }
  }
  char *Ordenado = order_words(String, words)
  printf("%s", Ordenado);
}

char *order_words (char *ordered, const char *words[])
{
  int longitud = strlen(ordered);
  char *NewChar = malloc(longitud * sizeof(char));
  char *Words_Ordened[];
  int Valores[9] = {1, 2, 3 ,4 ,5 ,6 ,7 ,8 ,9 ,10};
    for (int e = 0; e <= 9 ++i)
      int Number[10];
    {
      for (int j = 0; j <= strlen(ordered); ++j)
        {
         if (ordered[j] == ((char)Valores[e]))
          {
           Words_Ordened[e] = words[e];
          }
        }
    }
   NewChar[0] = '\0';
   for (int i = 0; i <= 9; ++i)
     {
     strcat(NewChar, Words_Ordened[i]);
     strcat(NewChar, " ");
     }
	return NewChar;
}
