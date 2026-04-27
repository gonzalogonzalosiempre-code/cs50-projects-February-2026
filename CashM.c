#include <stdio.h>
#include <cs50.h>
long Pregunta(void);
void OperacionLuhn(long);
int main(void)
{
long Tarjeta = Pregunta();
OperacionLuhn(Tarjeta);
}

void OperacionLuhn(Resultado)
{
  while (Resultado == 0 )
  {
   long PrimerResultado = (Resultado % 10); //Primer Digito
   long RestaResultado = (Resultado / 10);  //Resta
   long PrimerResultado2 = (Resultado % 10); //Segundo Digito
   long RestaResultado2 = (Resultado / 10);  //Resta

   long Almacena = (Almacena + PrimerResultado);
   long Almacena2 = (Almacena2 + PimerResultado2);
  }
  if (Resultado == 0)
  {
  long ValorTotal = (Almacena + Almacena2);
  }
  if (ValorTotal % 10 == 0)
  {
  printf("Tu Tarjeta es Valida!\n");
  }
  else
  {
  printf("Tu tarjeta es Invalida\n"):
  }
}
long Pregunta()
{
    long NumeroTarjeta
    do
    {
    NumeroTarjeta = get_long("Ingrese su Numero de tarjeta.. ");
    }
    while(NumeroTarjeta > 16);
    return NumeroTarjeta;
}

