#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

size_t duplicate_count(const char *text);

int main(void)
  {
  char Text[10];
  printf("Ingrese sus letras: ");
  fgets(Text, sizeof(Text), stdin);

  size_t Puntaje = duplicate_count(Text);
  printf(" Numero de Repeticiones es %zu", Puntaje);

}

size_t duplicate_count(const char *text) {
  size_t count_repeats = 0;
  char data_tmp;
  for (int i = 0, n = strlen(text); i <= n; ++i)
    {
        if (data_tmp == text[i] || text[i] == '\n' || text[i] == '\000)
          {
          continue;
        }
      for (size_t e = i; e <= strlen(text); ++e)
        {
         if (text[i] == text[e])
          {
          count_repeats++;
          data_tmp = text[i];
          break;
        }
      }
    }
  return count_repeats;
  }
