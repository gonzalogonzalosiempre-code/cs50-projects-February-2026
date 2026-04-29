#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

string Pregunta(Void);
string Pregunta2(Void);
void OperacionJuez(string, string);

int main(void)
{
 string Pregunta = Pregunta();
 string Pregunta2 = Pregunta2();
}

string Pregunta(Void)
{
    string PrimeraRespuesta = get_string("Ingrese su primera palabra.. ");
    return PrimeraRespuesta;
}

string Pregunta2(Void)
{
    string SegundaRespuesta = get_string("Ingrese su segunda palabra.. ");
    return SegundaRespuesta;
}

void OperacionJuez(string Respuesta1, string Respuesta2)
{
  int Puntaje[]
  {
    1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10;
  }

  string C[] = Respuesta1;

  string D[] = Respuesta2;

  for (int i = 0; i < strlen(Respuesta1); ++1)
  {
    if(isupper(Respuesta1[i]))
    {
    tolower(Respuesta1[i]);
    }
   while()
  }

  for (int e = 0; e < Respuesta2; ++1)
  {

  }
}
