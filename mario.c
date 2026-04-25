#include <stdio.h>
#include <cs50.h>

int Pregunta(void);
void Resultado2(int Altura);
void Resultado(int Altura);

int main(void)
{
    int NumeroAltura = Pregunta();
    Resultado2(NumeroAltura);

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
 void Resultado2(int Altura)
 {
    for (int i = 0; i <= Altura; ++i)
    {
    for (int j = Altura - i; j >= 0; --j)
     {
        printf(" ");
     }
      for (int e = 1; e <= i; ++e)
    {
        printf("#");
    }
        for ( int j = 0; j <= i; ++j)
    {
      printf("  ");
      for (int k = 1; k <= j; ++k)
      {
        printf("#");
      }
    }
    printf("\n");
    }
}





