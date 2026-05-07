#include "helpers.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    int Total[sizeof(image)];
    int Redondeado = (int)(Redondeo + 0.5);
    int NumeroEntero = (int)Redondeo
    while fread(&image[height][width] , sizeof(BYTE), 1 , inptr)
      for (int i = 0; i < sizeof(image); ++i)
      {
        for (int j = 0; j < sizeof(image); ++j)
        Total[j] = image[i] + image[i][j];
        if (Total[j] != NumeroEntero)
        {
            Total[j] = Redondeado;
        }
      }
      fwrite(&Total[j] , sizeof(BYTE), 1 , outptr)

    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
