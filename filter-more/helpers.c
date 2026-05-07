#include "helpers.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    float Total[sizeof(image)];
    int NumeroEntero = (int)Redondeo
    while fread(&image, sizeof(BYTE), 1 , inptr)
      for (int i = 0; i < sizeof(image); ++i)
      {
        for (int j = 0; j < sizeof(image); ++j)
        {
        int red = image[i][j].rgbtRed;
        int Green = image[i][j].rgbtGreen;
        int Blue = image[i][j].rgbtBlue

        Total[j] = red + Green + Blue;
        Total[j] = Total[j] / 3.0;
        red, Green, Blue = Total[j]
        Total[j] = 
        }
     }
      fwrite(&image, sizeof(BYTE), 1 , outptr);

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
