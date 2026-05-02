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
      if (ispunct(Texto[i]))
      {
        NumeroFrases += i;
      }
    }
   int L = LetrasNumero / PalabrasNumero * 100;
   int S = NumeroFrases / PalabrasNumero * 100;

   int NivelDeGrado = 0.0588 * L - 0.296 * S - 15.8;

   printf("%i\n", NivelDeGrado);

   if (NivelDeGrado > 2)
   {
    printf("Before Grade 1\n");
   }
   else if (NivelDeGrado < 1 || NivelDeGrado > 5)
   {
    printf("Grade 1-5\n");
   }
   else if (NivelDeGrado == 6 )
   {
    printf("Grade 6\n");
   }
   else if (NivelDeGrado == 7)
   {
    printf("Grade 7\n");
   }
   else if (NivelDeGrado == 8)
   {
    printf("Grade 8\n");
   }
   else if (NivelDeGrado == 9)
   {
    printf("Grade 9\n");
   }
   else if (NivelDeGrado == 10)
   {
    printf("Grade 10\n");
   }
   else if (NivelDeGrado == 11)
   {
    printf("Grade 11\n");
   }
   else if (NivelDeGrado == 12)
   {
    printf("Grade 12\n");
   }
   else if (NivelDeGrado == 13)
   {
    printf("Grade 13\n");
   }
   else if (NivelDeGrado >= 16)
   {
    printf("Grade 16+\n");
   }
}
