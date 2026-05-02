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
    int monedas = 0;

    // 1. ¿Cuántas de 25 caben?
    monedas += (Cambio / 25); // Sumamos la cantidad de monedas de 25
    Cambio %= 25;             // El nuevo Cambio es lo que sobra (el residuo)

    // 2. Del resto, ¿cuántas de 10 caben?
    monedas += (Cambio / 10);
    Cambio %= 10;

    // 3. Del resto, ¿cuántas de 5 caben?
    monedas += (Cambio / 5);
    Cambio %= 5;

    // 4. Del resto, ¿cuántas de 1 caben?
    monedas += (Cambio / 1);
    Cambio %= 1;

    // 5. Imprimir SOLAMENTE el número total de monedas
    printf("%i\n", monedas);
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
