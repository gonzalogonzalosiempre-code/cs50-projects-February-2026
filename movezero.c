#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void move_zeros(size_t len, int arr[len]);

int main(void)
{
  int arr[5];
  size_t len = 5;
  for (size_t i = 0; i <= len; ++i)
  {
    printf("Introduzca sus Numeros: ");
    scanf("%i", &arr[i]);
   }
  move_zeros(len, arr);
}


void move_zeros(size_t len, int arr[len])
{
  int tmp[len];
  for (size_t i = 0; i <= len; ++i)
    {
      if (arr[i] == 0)
        {
        for (size_t e = i + 1; e <= len; ++e)
          {
          if (arr[e] != 0)
            {
            tmp[e] = arr[e];
            arr[e] = arr[i];
            arr[i] = tmp[e];
          }
        }
      }
    }
    for (size_t i =  0 ; i <= len; ++i)
      {
      printf("%i ", arr[i]);
    }
    printf("\n");
    // mutate arr in place
}
