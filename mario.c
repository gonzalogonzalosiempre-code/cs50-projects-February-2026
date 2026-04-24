#include <stdio.h>
#include <cs50.h>

int Pregunta(void);
void Resultado(int piramide);

int main(void)
{
    int NumeroAltura = Pregunta();
    Resultado(NumeroAltura);

}
 int Pregunta()
 {
    int NumeroAltura;
    //Devuelve la pregunta si es numero negativo, hasta que sea un numero positivo
    do
    {
     NumeroAltura = get_int("Que altura tendra la piramide? ");
    }
    while(NumeroAltura < 0);
    return NumeroAltura;
    //Crea el primer bucle que crea una linea en la terminal es decir cuenta 1 y asi sucesivamente hasta que llega a el numero del valor de retorno
 }
 void Resultado(int NumeroAltura)
 {
     for ( int j = 0; j <= NumeroAltura; ++j)
    {
    //Suma en 1 el numero del primer bucle es decir, el primer bucle crea 1 linea, el bucle que empieza en 0 le suma se suma 1 para llegar al valor del primer bucle por consiguiente
    //le pedimos que imprima # el numero de veces de i y asi por cada linea creada imprime tambien #
      for (int i = 1; i <= j; ++i)
      {
        printf(" ");
        printf("#");
      }
       printf("\n");
    }
 }



