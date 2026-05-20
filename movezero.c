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
  for (size_t i = 0; i <= len / 2; ++i)
    {
      if (arr[i] == 0)
        {
        tmp[len] = arr[len - i];
        arr[i] = arr[len - i];
        arr[len - i] = tmp[len];
      }
    }
    for (size_t i =  0 ; i <= len; ++i)
      {
      printf("%i ", arr[i]);
    }
    printf("\n");
    // mutate arr in place
}
