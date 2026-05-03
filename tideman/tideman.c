#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

#define MAX 9;

typedef struct
{
  int Votes;
  string Name;
} Candidates;

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
    Candidates[i].Name
  }
}
