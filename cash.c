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
    //Empieza las Operaciones
    if (Cambio = Cambio)
    {
     int O1 = ("%i / 25")
     int O2 = ("%i / 10")
     int O3 = ("%i / 5")
     int O4 = ("%i / 1")
    }
    if (Cambio = Cambio)
    {
     int O5 = ("%i % 25", Cambio)
     int O6 = ("%i % 10", Cambio)
     int O7 = ("%i % 5", Cambio)
     int O8 = ("%i % 1", Cambio)
    }
    //Finaliza las Operaciones

    //Empieza Operaciones de Impresion si caben mas numeros
    if (O5 != 0)
    {
     for (int i = 0; i <= O5; ++i)
    {
     printf(" 25 ");
    }
     printf(" %i ", O5);
    }
    else if (O6 != 0)
    {
     for (int e = 0; i <= O6; ++e)
    {
     printf(" 10 ");
    }
     printf(" %i ", O6);
    }
    else if (O7 != 0)
    {
     for (int o = 0; o <= O7; ++o)
    {
     printf(" 5 ");
    }
     printf(" %i ", O7);
    }
    else if (O8 != 0)
    {
     for (int j = 0; j <= O7; ++j)
    {
     printf(" 1 ");
    }
     printf(" %i ", O8);
    }
    else
    {
        continue;
    }
    //Finaliza las Operaciones

     //Empieza las operaciones
    if (25 * O1 == Cambio)
    {
        for (int k = 0; k <= O1; ++k)
        {
            printf(" 25 ");
        }
    }
    else if (10 * O2 = Cambio)
    {
        for (int l = 0; l <= O2; ++l)
        {
            printf(" 10 ");
        }
    }
    else if (5 * O3 == Cambio)
    {
        for (int u = 0; u <= O3: ++u)
        {
            printf(" 5 ");
        }
    }
    else if (1 * O4 == Cambio)
    {
        for (int t = 0: t <= O4; ++t)
        {
            printf(" 1 ");
        }
    }
    else
    {
        printf("Valor no Calculable \n");
    }
    //Termina las operaciones
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
