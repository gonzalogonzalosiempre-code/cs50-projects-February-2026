#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string Texto = get_string("Ingrese Su obra/Texto: ");
    int PalabrasNumero = 0;
    int LetrasNumero = 0;
    int NumeroFrases = 0;
    for (int i = 0, n = strlen(Texto); i < n; ++i)
    {
      if (isalpha(Texto[i]))
      {
      LetrasNumero += i;
      }
      if (isspace(Texto[i]))
      {
       PalabrasNumero += i;
      }
      if (ispuntc(Texto[i]))
      {
        MediaFrases += i;
      }
    }
   int L = LetrasNumero / PalabrasNumero * 100;
   int S = NumeroFrases / PalabrasNumero * 100;

   int NivelDeGrado = 0.0588 * L - 0.296 * S - 15.8;

   printf("%i\n", NivelDeGrado);

}
