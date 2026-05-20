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
  int count_zero = 0;
  for (size_t i = 0; i <= len / 2; ++i)
    {
      if (arr[i] == 0)
        {
        count_zero++;
      }
    }
  for (int i = 0; i <= count_zero; ++i)
  {
    tmp[len - i] = arr[]
  }
    for (size_t i =  0 ; i <= len; ++i)
      {
      printf("%i ", arr[i]);
    }
    printf("\n");
    // mutate arr in place
}
