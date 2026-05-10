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
  FILE *img = NULL;
  FILE *card = fopen("card.raw", "r");
  while (fread(&buffer, 1, 512, card) == 512)
  {
    fread(&buffer, sizeof(BYTE), 512 , card);

    if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
    {
      if (contador == 0)
      {
      sprintf(name, "%03i.jpg", contador);
      img = fopen(name , "w");
      fwrite(&buffer, sizeof(BYTE), 1 , img);
      contador++;
      }
      else
      {
      fclose(img);
      sprintf(name, "%03i.jpg", contador);
      img = fopen(name , "w");
      fwrite(&buffer, sizeof(BYTE), 1 , img);
      contador++;
      }
    }
    else
    {
      if ( contador >= 1)
      {
      fwrite(&buffer, sizeof(BYTE), 1 , img);
      }
    }
    }
  }
  free(name);
  fclose(card);
  fclose(img);
  return 0;
}
