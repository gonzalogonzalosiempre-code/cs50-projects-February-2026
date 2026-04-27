#include <stdio.h>
#include <cs50.h>
long Pregunta(void);
void OperacionLuhn(long);
int main(void)
{
long Tarjeta = Pregunta();
OperacionLuhn(Tarjeta);
}
void OperacionLuhn(long Resultado)
{
  long Almacena = 0;
  long Almacena2 = 0;
  while (Resultado > 0 )
  {
   long PrimerResultado = (Resultado % 10); //Primer Digito
   long RestaResultado = (Resultado / 10);  //Resta
   Resultado = (Resultado / 10);
   long PrimerResultado2 = (Resultado % 10); //Segundo Digito
   long RestaResultado2 = (Resultado / 10);  //Resta
   Resultado = (Resultado / 10);
   PrimerResultado2 = (PrimerResultado2 * 2);

   if (PrimerResultado2  > 9)
   {
    PrimerResultado2 = (PrimerResultado2 - 10 + 1);
   }

   Almacena = (Almacena + PrimerResultado);
   Almacena2 = (Almacena2 + PrimerResultado2 );
  }

  long ValorTotal = (Almacena + Almacena2);
  if (ValorTotal % 10 == 0)
  {
  printf("Tu Tarjeta es Valida!\n");
  }
  else
  {
  printf("Tu tarjeta es Invalida\n");
  }
}
long Pregunta()
{
    long NumeroTarjeta;
    do
  {
    NumeroTarjeta = get_long("Ingrese su Numero de tarjeta.. ");
  }
    while(NumeroTarjeta <= 0);
    return NumeroTarjeta;
}

