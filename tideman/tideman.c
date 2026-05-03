#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

#define MAX 9;

typedef struct
{
  string Name;
  int Preference;
  int Rango;
} Candidates;

Candidates Candidate[MAX];

int main(int argc, string argv[])
{
  if (argc < 2)
  {
    printf("Ingrese mas Candidatos..");
    return 1;
  }
  int NumerosDeCandidatos = argv - 1

  if (NumerosDeCandidatos > MAX)
  {
    printf("El limite es 9.. Ingrese Otra vez");
    return 2;
  }

  for (int i = 0; i < NumerosDeCandidatos; ++i)
  {
    Candidate[i].Name = argv[i + 1];
    Candidate[i].Preference = 0;
    Candidate[i].Rango = 0;
  }
  int NumeroVotos = get_int("Numeros De Votos");
  for (int i = 0; i < NumeroDeCandidatos; ++i)
  {
  for (int i = 0; i < NumeroVotos; ++i)
  {
   string Nombre = get_string("Rank: ");
   if (Nombre != Candidate[i].Name)
    {
    printf("Invalidid Name");
    return 1;
     }
   for (int e = 0; e < NumerosDeCandidatos; ++i)
     {
      if (strcmp(Nombre, Candidate[e].Name) == 0)
      {
       Candidate[i].Preference ++;
      }
     }
    printf("\n");
   }
   if (Candidate[i].Vote )
   }
}
