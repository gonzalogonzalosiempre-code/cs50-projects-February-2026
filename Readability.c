#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string Texto = get_string("Ingrese Su obra/Texto: ");
    int PalabrasNumero = 0;
    int LetrasNumero = 0;
    int MediaFrases = 0;
    for (int i = 0, int n = strlen(Texto); i < n; ++i)
    {
      LetrasNumero += i;
      if (isspace(Texto[i]))
      {
       PalabrasNumero += 1;
      }
      
    }
}
