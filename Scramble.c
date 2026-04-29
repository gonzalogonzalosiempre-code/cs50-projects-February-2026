#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int Pregunta(string Respuesta1);
void OperacionJuez(string, string);

int main(void)
{
  string Respuesta1 = get_string("Su Primer Palabra es.. ");
  string Respuesta2 = get_string("Su Segunda Palabra es.. ");
  int Puntaje = Pregunta(Respuesta1);
  int Puntaje2 = Pregunta(Respuesta2);

  if(Puntaje > Puntaje2)
  {
    printf("Jugador Uno Gano!\n");
  }
  else if
  {
    printf("Jugador Dos Gano!\n");
  }
  else
  {
    printf("Empate!\n");
  }
}

int Pregunta(string Respuesta1)
{
    int Puntaje[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
    int Resultado = 0;
    for (i = 0, n = strlen(Respuesta1); i < n; ++i)
    {
      if (isupper(Respuesta1[i]))
      {
        Resultado += Puntaje[Respuesta1[i]] - 'A';
      }
      else if
      {
        Resultado += Puntaje[Respuesta1[i]] - 'a';
      }
    }
  return Resultado;
}
