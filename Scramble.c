#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int Pregunta(string Respuesta1);
void OperacionJuez(string, string);

int main(void)
{
 string Respuesta1 = get_string("Su primer puntaje es.. ");

 int Puntaje = Pregunta(Respuesta1);
}

int Pregunta(string Respuesta1)
{
    int Puntaje[] = { 1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};

    int AlmacenaSumas = 0;
    int PuntajeSuma = 0;

    for (int i = 0; i < strlen(Respuesta1); ++i)
  {
    PuntajeSuma = PuntajeSuma + Respuesta1[i] - 65;
  }

  return AlmacenaSumas;
}
