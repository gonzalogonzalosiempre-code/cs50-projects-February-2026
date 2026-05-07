#include "helpers.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    int Redondeo[sizeof(image)];
    while (fread(&image , sizeof(BYTE), 1 , inptr))
    {
      for (int i = 0; i < sizeof(image); ++i)
      {
        for (int j = 0; j < sizeof(image); ++j)
        Redondeo[j] = image[i] + image[i][j]
      }
      fwrite(&image[i], sizeof(BYTE), 1 , outptr)
    }
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
