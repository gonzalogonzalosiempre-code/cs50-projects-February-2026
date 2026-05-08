#include "helpers.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    float Total[sizeof(image)];
    int NumeroEntero = (int)Redondeo
    while (fread(&image, sizeof(BYTE), 1 , inptr))
    {
      for (int i = 0; i < height; ++i)
      {
        for (int j = 0; j < width; ++j)
        {
        int red = *image[i][j].rgbtRed;
        int Green = *image[i][j].rgbtGreen;
        int Blue = *image[i][j].rgbtBlue

        Total[j] = red + Green + Blue;
        Total[j] = Total[j] / 3.0;
        red, Green, Blue = (int)Total[j];
        }
      }
     }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    while (fread(&image , sizeof(BYTE), 1 , inptr))
    {
        for (int i = 0; i < height; ++i)
        {
          for (int j = 0; j < width; ++j)
          {
            int Pixel = image[i][j];
            Pixel = image[j][i];
            *image[i][j] = Pixel;
          }
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE temp[height][width]
    for (int i = 0; i < height; ++i)
    {
        for (int j = 0; j < width; ++j)
        {
          temp[i][j] = image[i][j]
        }
    }
    for (int i = 0; i < height; ++i)
    {
        for (int j = 0; j < width; ++j)
        {
            float sumaRed = 0, sumaGreen = 0, sumaBlue = 0;
            for (int fila = i - 1; fila < i + 1; ++fila)
            {
                for (int col = j - 1; col < j + 1; ++col)
                {
                    sumaRed += image[fila][col].rgbtRed;
                    sumaGreen += image[fila][col].rgbtGreen;
                    sumaBlue += image[fila][col].rgbtBlue;
                    if ( fila <= 0 && height <= fila && col <= 0 && width <= col)
                    {
                        
                    }
                }
            }
        }
    }
    return;
}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
