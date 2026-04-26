#include <stdio.h>
#include <cs50.h>
int Pregunta(void);
void Operacion(int);
int main(void)
{
   int Cambio = Pregunta();
   Operacion(Cambio);
}
void Operacion(int Cambio)
{
    //Empieza las Operaciones
     int O1 = ( Cambio / 25);
     int O2 = ( Cambio / 10);
     int O3 = ( Cambio / 5);
     int O4 = ( Cambio / 1);

     int O5 = ( Cambio % 25);
     int O6 = ( Cambio % 10);
     int O7 = ( Cambio % 5);
     int O8 = ( Cambio % 1);
    //Finaliza las Operaciones

    //Empieza Operaciones de Impresion si quiere sumar monedas
    if (O5 != 0)
    {
     for (int i = 0; i < O1; ++i)
    {
     printf(" 25 ");
    }
     printf(" %i ", O5);
    }
    else if (O6 != 0)
    {
     for (int e = 0; e < O2; ++e)
    {
     printf(" 10 ");
    }
     printf(" %i ", O6);
    }
    else if (O7 != 0)
    {
     for (int o = 0; o < O3; ++o)
    {
     printf(" 5 ");
    }
     printf(" %i ", O7);
    }
    else if (O8 != 0)
    {
     for (int j = 0; j < O4; ++j)
    {
     printf(" 1 ");
    }
     printf(" %i ", O8);
    }
    else
    {
    //Finaliza Y empieza siguiente Operacion
    //Empieza las operaciones si quiere solo un tipo de moneda
    if (25 * O1 == Cambio)
    {
        for (int k = 0; k < O1; ++k)
        {
            printf(" 25 ");
        }
    }
    else if (10 * O2 == Cambio)
    {
        for (int l = 0; l < O2; ++l)
        {
            printf(" 10 ");
        }
    }
    else if (5 * O3 == Cambio)
    {
        for (int u = 0; u < O3; ++u)
        {
            printf(" 5 ");
        }
    }
    else if (1 * O4 == Cambio)
    {
        for (int t = 0; t < O4; ++t)
        {
            printf(" 1 ");
        }
    }
    else
    {
        printf("Valor no Calculable \n");
    }
    //Termina las operaciones
    }
    //Finaliza las Operaciones
}
int Pregunta()
{
    //Bucle para solo recibir numeros enteros, positivos
    int Cambio;
    do
    {
      Cambio = get_int("Cual es su monto..?");
    }
     while(Cambio <= 0);
    //Devuelve el Valor int
     return Cambio;
}
