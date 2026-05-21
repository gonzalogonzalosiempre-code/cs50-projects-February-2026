#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Count_Valores = 0;
char TableHash[Count_Valores][];

int main(void)
{
 char Texto[];
 char *Valores[];
 char Variable[][];

 printf("Ingresa Operacion: ");
 if ((fgets(Texto, sizeof(Texto), stdin)) != NULL)
 {
    if (int i = 0; i < strlen(Texto); ++i)
    {
        if (Texto[i] == '=')
        {
          for (j = i ; j >= 0; --i)
          {
            if (Texto[i] != ' ')
            {
                Count_Valores++;
               int e = HashClave[Texto[i]]
               for (k = i; k <= strlen(Texto); ++i)
            {
             if (Texto[i] != " ")
              {
                Variable[Count_Valores][e] = Texto[i] - '0';

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
   Valores[Count] = strtok(Texto, " ");
  while (strtok != NULL)
  {
    ++Count_Valores
  Valores[i] = strtok(NULL, " ");

 }
}

char HashClave(char arr[])
{

    arr[]
}
