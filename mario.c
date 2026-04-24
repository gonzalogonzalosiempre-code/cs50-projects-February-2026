#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int NumeroAltura;
    //Devuelve la pregunta si es numero negativo, hasta que sea un numero positivo
    do
    {
     NumeroAltura = get_int("Que altura tendra la piramide? ");
    }
    while(NumeroAltura < 0);
    //Crea el primer bucle que crea una linea en la terminal es decir cuenta 1 y asi sucesivamente hasta que llega a el numero del valor de retorno
    for ( int j = 1; j < NumeroAltura; ++j)
    {
    //Suma en 1 el numero del primer bucle es decir, el primer bucle crea 1 linea, el bucle que empieza en 0 le suma se suma 1 para llegar al valor del primer bucle por consiguiente
    //le pedimos que imprima # el numero de veces de i y asi por cada linea creada imprime tambien #
      for (int i = 1; i < j; ++i)
      {
        printf("#");
      }
       printf("\n");
    }
}


