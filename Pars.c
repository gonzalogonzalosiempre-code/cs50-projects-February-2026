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
          for (i ; i >= 0; --i)
          {
            if (Texto[i] != ' ')
            {
                Count_Valores++;
               int e = HashClave[Texto[i]]
               Varible[Count_Valores][e] = Texto[i];
               break;
            }
            if 
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
