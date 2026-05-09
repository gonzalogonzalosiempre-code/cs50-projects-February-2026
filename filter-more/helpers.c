#include "helpers.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
      for (int i = 0; i < height; ++i)
      {
        for (int j = 0; j < width; ++j)
        {
        int red = image[i][j].rgbtRed;
        int Green = image[i][j].rgbtGreen;
        int Blue = image[i][j].rgbtBlue;

        float Total = red + Green + Blue;
        Total = Total / 3.0;
        image[i][j].rgbtRed = (int)Total;
        image[i][j].rgbtBlue = (int)Total;
        image[i][j].rgbtBlue = (int)Total;
        }
      }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
        for (int i = 0; i < height; ++i)
        {
         for (int j = 0; j < width / 2; ++j)
         {
          RGBTRIPLE temp = image[i][j];

          image[i][j] = image[i][width - 1 - j];

          image[i][width - 1 - j] = temp;
         }
        }
    return;
}
// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE temp[height][width];
    for (int i = 0; i < height; ++i)
    {
        for (int j = 0; j < width; ++j)
        {
          temp[i][j] = image[i][j];
        }
    }
    for (int i = 0; i < height; ++i)
    {
        for (int j = 0; j < width; ++j)
        {
            float sumaRed = 0, sumaGreen = 0, sumaBlue = 0;
            int contador = 0;
            for (int fila = i - 1; fila <= i + 1; ++fila)
            {
                for (int col = j - 1; col <= j + 1; ++col)
                {
                    if ( fila >= 0 && fila < height && col >= 0 && col < width)
                    {
                    sumaRed += temp[fila][col].rgbtRed;
                    sumaGreen += temp[fila][col].rgbtGreen;
                    sumaBlue += temp[fila][col].rgbtBlue;
                    contador ++;
                    }
                }
            }
            image[i][j].rgbtRed = (int)(sumaRed / contador);
            image[i][j].rgbtGreen = (int)(sumaGreen / contador);
            image[i][j].rgbtBlue = (int)(sumaBlue / contador);
        }
    }
    return;
}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE temp[height][width];
    for (int i = 0; i < height; ++i)
    {
        for (int j = 0; j < width; ++j)
        {
          temp[i][j] = image[i][j];
        }
    }
    for (int i = 0; i < height; ++i)
    {
        for (int j = 0; j < width; ++j)
        {
            int Gx[3][3] = {
            {-1 , 0 , 1},
            {-2 , 0 , 2},
            {-1 , 0 , 1}
            };
            int Gy[3][3] = {
            {-1 ,-2 ,-1},
            { 0 , 0 , 0},
            { 1 , 2 , 3}
            };
            for (int fila = i - 1; fila <= i + 1; ++fila)
            {
                for (int col = j - 1; col <= j + 1; ++col)
                {
                     if ( fila >= 0 && fila < height && col >= 0 && col < width)
                     {
                     OperacionGreen = temp[fila][col].rgbtGreen * Gx[r][a];
                     OperacionBlue = temp[file][col].rgbtBlue * Gx[r][a];
                     OperacionRed = temp[file][col].rgbtRed * Gx[r][a];
                     }
                 }
             }
     }

    }
}
    return;

