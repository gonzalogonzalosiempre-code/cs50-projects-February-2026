#include "helpers.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    float Total[sizeof(image)];

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
    RGBTRIPLE temp[height][width];
    while (fread(&image , sizeof(BYTE), 1 , inptr))
    {
        for (int i = 0; i <= height; ++i)
        {
          for (int j = 0; j <= width; ++j)
          {
            image[i][j];
            for (int k = 0; k = witdh; ++k)
            {
             if (j = witdh)
            {
                image[i][k];
            }
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
            int contador;
            for (int fila = i - 1; fila < i + 1; ++fila)
            {
                for (int col = j - 1; col < j + 1; ++col)
                {
                    if ( fila <= 0 && height <= fila && col <= 0 && width <= col)
                    {
                    sumaRed += temp[fila][col].rgbtRed;
                    sumaGreen += temp[fila][col].rgbtGreen;
                    sumaBlue += temp[fila][col].rgbtBlue;
                    contador ++;
                    }
                }
            }
            *image[i][j].rgbtRed = (int)(sumaRed / contador);
            *image[i][j].rgbtGreen = (int)(sumaGreen / contador);
            *image[i][j].rgbtBlue = (int)(sumaBlue / contador);
        }
    }
    return;
}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
