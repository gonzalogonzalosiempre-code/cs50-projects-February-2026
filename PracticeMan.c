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
  if (fgets(String, sizeof(String),stdin) !=)
  {
   String[strcspn(String, "\n")] = '\0';
   }
  char *Ordenado = order_words(String, words)

  if (Orneado != NULL)
  {
    printf("%s", Ordenado);
  }
}

char *order_words (char *ordered, const char *words[])
{
  int longitud = strlen(ordered);
  char *NewChar = malloc(longitud * sizeof(char));
  if (NewChar == NULL)
  {
    return NULL;
  }
  NewChar[0] = '\0';
  char *Words_Ordened[];
  char *token = strtok(String, " ");
  if (token == NULL)
  {
    return NULL;
  }
  for (int i = 0; token[i] != '\0'; ++i)
  {
    if(isdigit(token[i]))
    {
      int indice = token[i] - '0';
      Words_Ordened[indice] = token;
    }
  }
  for (int i = 0; i <= 9; ++i)
  {
    strcat(NewChar, Words_Ordened[i]);
    strcat(NewChar, " ");
  }
	return NewChar;
}
