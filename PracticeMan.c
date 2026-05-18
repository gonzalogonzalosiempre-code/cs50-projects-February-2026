#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

char *order_words (char *String);

int main(void)
{
  char String[100];
  printf("Ingrese su texto ");
  if (fgets(String, sizeof(String),stdin) != NULL)
  {
   String[strcspn(String, "\n")] = '\0';
   }
  char *Ordenado = order_words(String);

  if (Ordenado != NULL)
  {
    printf("%s", Ordenado);
  }
}

char *order_words (char *String)
{
  int longitud = strlen(String);
  char *NewChar = malloc(longitud * sizeof(char));
  if (NewChar == NULL)
  {
    return NULL;
  }
  NewChar[0] = '\0';
  char *Words_Ordened[10] = {NULL};
  char tmp[100];
  strcpy(tmp,String);
  char *token = strtok(tmp, " ");
  while (token != NULL)
  {
  for (int i = 0; token[i] != '\0'; ++i)
  {
    if(isdigit(token[i]))
    {
      int indice = token[i] - '0';
      Words_Ordened[indice] = token;
    }
  }
  token = strtok(NULL, " ");
  }
  for (int i = 0; i <= 9; ++i)
  {
    strcat(NewChar, Words_Ordened[i]);
    strcat(NewChar, " ");
  }
	return NewChar;
}
