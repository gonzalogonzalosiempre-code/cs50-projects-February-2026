#include <stdio.h>
#include <cs50.h>
int Pregunta(void);
void Operacion(int)
int main(void)
{
   Pregunta();
}
void Operacion(int Cambio)
{
    if (Cambio = Cambio)
    {
     int O1 = ("%i / 25")
     int O2 = ("%i / 10")
     int O3 = ("%i / 5")
     int O4 = ("%i / 1")
    }
    if (Cambio = Cambio)
    {
     int O5 = ("%i % 25")
     int O6 = ("%i % 10")
     int O7 = ("%i % 5")
     int O8 = ("%i % 1")
    }
    if (Cambio = Resultado)
    printf("Cambio de 25 es: %i\n" ...);
    printf("Cambio de 10 es: %i\n" ...);
    printf("Cambio de 5 es: %i\n" ...);
    printf("Cambio de 1 es: %i\n" ...);
    if ( O5 > 0)
    {
    printf("%i", O5);
    }
    if ( O6 > 0)
    {
    printf("%i" O6);
    }
    if ( O7 > 0)
    {
    printf("%i" O7);
    }
    if ( O8 > 0)
    {
    printf("%i" O8);
    }
}

int Pregunta()
{
    int Cambio;
    do
    {
      Cambio = get_int("Cual es su monto..?");
    }
     while(Cambio <= 0);

     return Cambio;
}
