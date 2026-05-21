#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

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

int AsignarOperar(char Text[] int n) // Asigna en Variable y devuelve el Valor de esa Variable
{
    int i = n;
    if (i; i < strlen(Texto); ++i)
    {
        if (Texto[i] == '=')
        {
          for (j = i ; j >= 0; --i)
          {
            if (isalpha(Texto[i]))
            {
                Count_Valores++;
               int e = HashClave[Texto[i]]
               for (k = i; k <= strlen(Texto); ++i)
            {
             if (Texto[i] != " ")
              {
                Variable[Count_Valores][e] = Texto[i] - '0';
                break;
              }
              else if (Texto[i] == '(')
              {

              }
             }
               break;
            }
          }

        }
     }
}

char HashClave(char arr[])
{

    arr[]
}

int OperacionParentesis(char Text[], int n) //Opera si encuentra Parentesis y returna en otras funciones
{
 int Resultado = 0;
 int i = n;
 for (n; n <= strlen(Text); ++i)
 {
   if (isalpha(Text[n]))
   {
    int e = AsignarOperar(Text[n]); // Te da un valor para el char
    int j = e + 1;
    while (Text[j] != ')')
    {
     if (ispunct(Text[j]) && (c == '+' || c == '-' || c == '*' || c == '/'))
     {
        int k = j + 1;
       while (Text[k] != ')')
       {
         
       }
     }
    }
   }
   else if (isdigit(Text[n]))
   {
    int e = Text[n] - '0';


   }
 }
}
