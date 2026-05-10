#include <stdio.h>
#include <stdlib.h>

typedef uint8_t  BYTE;

int main(int argc, char *argv[])
{
  if (argc != 2)
  {
    printf("Usage: ./recover FILE\n");
    return 1;
  }
  int *buffer = malloc(sizeof(BYTE * 512));
  if (buffer == NULL)
  {
    return 1;
  }
  FILE *card = fopen("card.raw", r)
  while (fread())
}
