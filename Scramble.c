#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int Pregunta(int Tamaño, string Respuesta1);
void OperacionJuez(string, string);

int main(void)
{
 string Respuesta1 = Pregunta(Respuesta1);
}

int Pregunta(int Tamaño, string Respuesta1)
{
    int Puntaje[] = { 1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10;}

    int AlmacenaSumas;
    int PuntajeSuma;
    string Respuesta1[] = get_string("Ingrese su primera palabra.. ");

    for (int i = 0; i < strlen(Respuesta1); ++i)
  {
    PuntajeSuma = Respuesta1[i] - A;
    for (int e = 0; Puntaje[e] == PuntajeSuma; ++e)
    {
      if (PuntajeSuma == Puntaje[e])
      {
        AlmacenaSumas = AlmacenaSumas + Puntaje[e];

        return AlmacenaSumas;
      }
    }
  }
}
