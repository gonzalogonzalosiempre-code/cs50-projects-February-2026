#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t  BYTE;

int main(int argc, char *argv[])
{
  if (argc != 2)
  {
    printf("Usage: ./recover FILE\n");
    return 1;
  }
  BYTE buffer[512] = {0};
  char *name = malloc(8 * sizeof(char));
  if (name == NULL)
  {
    return 1;
  }
  int contador = 0;
  FILE *card = fopen("card.raw", "r");
  while (fread(&buffer, sizeof(BYTE), 512, card) == 512)
  {
    fread(&buffer, sizeof(BYTE) , 512 , card);

    if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
    {
      sprintf(name, "%03i.jpg", contador);
      FILE *img = fopen(name , "w");
      fwrite(&buffer, sizeof(BYTE), 1 , img);
      contador++;
    }
    else
    {
      if ( buffer[0] != 0xff && contador > 0)
      {
      sprintf(name, "%03i.jpg", (contador - 1))
      FILE *img = fopen(name , "a");
      fwrite(&buffer, sizeof(BYTE), 1 , img);
      }
    }
    }
  free(name);
  fclose(card);
  fclose(img);
  return 0;
}
