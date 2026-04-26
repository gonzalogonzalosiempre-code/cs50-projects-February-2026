#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Recopila Almacena Digitos y Datos
    int Digito1 = get_int("Ingrese su 1 Digito.. ");
    int Digito2 = get_int("Ingrese su 2 Digito.. ");
    int Digito3 = get_int("Ingrese su 3 Digito.. ");
    int Digito4 = get_int("Ingrese su 4 Digito.. ");
    int Digito5 = get_int("Ingrese su 5 Digito.. ");
    int Digito6 = get_int("Ingrese su 6 Digito.. ");
    int Digito7 = get_int("Ingrese su 7 Digito.. ");
    int Digito8 = get_int("Ingrese su 8 Digito.. ");
    int Digito9 = get_int("Ingrese su 9 Digito.. ");
    int Digito10 = get_int("Ingrese su 10 Digito.. ");
    int Digito11 = get_int("Ingrese su 11 Digito.. ");
    int Digito12 = get_int("Ingrese su 12 Digito.. ");
    int Digito13 = get_int("Ingrese su 13 Digito.. ");
    int Digito14 = get_int("Ingrese su 14 Digito.. ");
    int Digito15 = get_int("Ingrese su 15 Digito.. ");
    int Digito16 = get_int("Ingrese su 16 Digito.. ");
    //Termina la Recopilacion

    //Empieza las operaciones
    int OP1 = (Digito2 * 2);
    int OP2 = (Digito4 * 2);
    int OP3 = (Digito6 * 2);
    int OP4 = (Digito8 * 2);
    int OP5 = (Digito10 * 2);
    int OP6 = (Digito12 * 2);
    int OP7 = (Digito14 * 2);
    int OP8 = (Digito16 * 2);
    //Terminan las operaciones

    //Comprobamos si la operacion usa 2 digitos
    if (OP1 > 9)
    {
        OP1 = (OP1 - 10 + 1);
    }
    if (OP2 > 9)
    {
        OP2 = (OP2 - 10 + 1);
    }
    if (OP3 > 9)
    {
        OP3 = (OP3 - 10 + 1);
    }
    if (OP4 > 9)
    {
        OP4 = (OP4 - 10 + 1);
    }
    if (OP5 > 9)
    {
        OP5 = (OP5 - 10 + 1);
    }
    if (OP6 > 9)
    {
        OP6 = (OP6 - 10 + 1);
    }
    if (OP7 > 9)
    {
        OP7 = (OP7 - 10 + 1);
    }
    if (OP8 > 9)
    {
        OP8 = (OP8 - 10 + 1);
    }
    //Termina los comprobantes

    //Empieza las Sumas
    int SumaUno = (Digito1 + Digito3 + Digito5 + Digito7 + Digito9 + Digito11 + Digito13 + Digito15);
    int SumaDos = (OP1 + OP2 + OP3 + OP4 + OP5 + OP6 + OP7 + OP8);
    int SumaTotal = (SumaDos + SumaUno);
    if (SumaTotal % 10 == 0)
    {
        printf("Tu Numero es Valido\n");
    }
    else
    {
        printf("Tu Numero es Invalido\n");
    }
    //Terminan las Sumas
}
