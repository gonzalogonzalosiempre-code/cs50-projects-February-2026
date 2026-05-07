#include "helpers.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE image;
    while (fread(&image , sizeof(BYTE), 1 , inptr))
    {
      for (int i = 0; i < )
      {
        int Redondeo = image[i].
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
