#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int Count_Valores = 0;
int Variable[Count_Valores][];

int main(void)
{
 char Texto[];
 char *Valores[];

 printf("Ingresa Operacion: ");
 if ((fgets(Texto, sizeof(Texto), stdin)) != NULL)
 {
    }
   Valores[Count] = strtok(Texto, " ");
  while (strtok != NULL)
  {
    ++Count_Valores
  Valores[i] = strtok(NULL, " ");

 }
}

bool VariableComprobada(int Text[][], int Count_Valores, int n)
{
    if (Variable[Count_Valores][HashClave(Texto[n])] != NULL OR Variable[Count_Valores][HashClave(Texto[i])] != 0 )
    {
        return false;
    }
    else
    {
        return true;
    }
}

int Asignar(char Texto[] int n) // Asigna en Variable y devuelve el Valor de esa Variable
{
    int Valor = 0;
    int p = n;
    int i = n + 1;
    if (VariableComprobada(Text, p) == true)
    {
        int Valor = Variable[][Texto[p]];
        return Valor;
    }
    if (isalpha(Texto[n]))
  {
    Count_Valores++;
    int e = HashClave(Texto[n]);
    for (i; i <= strlen(Texto); ++i)
    {
         if (isdigit(Texto[i]))
         {
          Variable[Count_Valores][e] = Texto[i] - '0';
          int Valor = Variable[Count_Valores][e]
          return Valor;
          }
          else if (isalpha(Texto[i]))
          {
           if (VariableComprobada(Variable, Count_Valores, i ) == true)
           {
            int Valor = Variable[Count_Valores][i];
            return Valor;
           }
           else
           {
            Variable[Count_Valores][e] = Asignar(Texto, i)
            int Valor = Variable[Count_Valores][e]
            return Valor;
           }
          }
          else if (Texto[i] == '(')
         {
          int Valor = OperacionParentesis(Texto, i);
          return Valor;
         }
       }
        break;
      }
}



char HashClave(char arr[])
{

    arr[]
}

int OperacionParentesis(char Text[] int n) //Opera si encuentra Parentesis y returna en otras funciones
{
 int Resultado = 0;
 int i = n;
 for (n; n <= strlen(Text); ++i)
 {
   if (isalpha(Text[n]))
   {
    int e = Asignar(Text[], n); // Te da un valor para el char
    int j = e + 1;
      Resultado = Operacion(Text, e);
     }
    }
   }
   else if (isdigit(Text[n]))
   {
    Resultado = Operacion(Text, n);
    return Resultado;
}

int Operacion(char Text[], int n ) //Operacion para el Operador
{
    if (n == strlen(Text) || Text[n] == ')')
    {
        return 0;
    }
    int Resultado = 0;
    for (int i = n + 1; i <= strlen(Text); ++i)
    {
    if (Text[i] == '+')
    {
     for(int e = i + 1; e <= strlen(Text); ++e)
     {
        if (isalpha(Text[e]))
        {
         int Val = Asignar(Text, e);
         Resultado = Val + Operacion(Text[], e);
         return Resultado;
        }
        else if ((Text[e] = '('))
        {
            Resultado = OperacionParentesis(Text, e)
            return Resultado;
        }
        else if (isdigit(Text[e]))
        {
         int Val = Text[e] - '0';
         Resultado = Val + Operacion(Text[], e);
         return Resultado;
        }
     }
    }
    else if (Text[i] == '-')
    {
     for(int e = i + 1; e <= strlen(Text); ++e)
     {
        if (isalpha(Text[e]))
        {
         int Val = Asignar(Text, e);
         Resultado = Val - Operacion(Text[], e);
         return Resultado;
        }
        else if ((Text[e] = '('))
        {
            Resultado = OperacionParentesis(Text, e)
            return Resultado;
        }
        else if (isdigit(Text[e]))
        {
         int Val = Text[e] - '0';
         Resultado = Val - Operacion(Text[], e);
         return Resultado;
        }
     }
    }
    else if (Text[i] == '*')
    {
     for(int e = i + 1; e <= strlen(Text); ++e)
     {
        if (isalpha(Text[e]))
        {
         int Val = Asignar(Text, e);
         Resultado = Val * Operacion(Text[], e);
         return Resultado;
        }
        else if ((Text[e] = '('))
        {
            Resultado = OperacionParentesis(Text, e)
            return Resultado;
        }
        else if (isdigit(Text[e]))
        {
         int Val = Text[e] - '0';
         Resultado = Val * Operacion(Text[], e);
         return Resultado;
        }
     }
    }
    else if (Text[i] == '/')
    {
     for(int e = i + 1; e <= strlen(Text); ++e)
     {
        if (isalpha(Text[e]))
        {
         int Val = Asignar(Text, e);
         Resultado = Val / Operacion(Text[], e);
         return Resultado;
        }
        else if ((Text[e] = '('))
        {
            Resultado = OperacionParentesis(Text, e)
            return Resultado;
        }
        else if (isdigit(Text[e]))
        {
         int Val = Text[e] - '0';
         Resultado = Val / Operacion(Text[], e);
         return Resultado;
        }
     }
    }
   }
}
