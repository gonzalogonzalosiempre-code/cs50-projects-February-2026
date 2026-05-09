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
    int a;
    int r;
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
            float RedGX = 0, GreenGX = 0, BlueGX = 0;
            float RedGY = 0, GreenGY = 0, BlueGY = 0;
            int GXsuma = 0;
            int GXsuma = 0;
            for (int fila = i - 1; fila <= i + 1; ++fila)
            {
             a = fila + 2;
                for (int col = j - 1; col <= j + 1; ++col)
                {
                  r = col + 2;
                     if ( fila >= 0 && fila < height && col >= 0 && col < width)
                     {
                      GreenGX = temp[fila][col].rgbtGreen * Gx[a][r];
                      BlueGX = temp[file][col].rgbtBlue * Gx[a][r];
                      RedGX = temp[file][col].rgbtRed * Gx[a][r];
                      GreenGY = temp[file][col].rgbtGreen * Gx[a][r];
                      BlueGY = temp[file][col].rgbtBlue * Gx[a][r];
                      RedGY = temp[file][col].rgbtRed * Gx[a][r];
                     }
                   r++;
                 }
               a++;
             }
            GXsuma = GreenGX + BlueGX + RedGX;
            GYsuma = GreenGY + BlueGY + RedGY;
            int SumaTotal = hypot(GYsuma + GXsuma);
            if (SumaTotal > 255)
            {
              SumaTotal = 255;
            }
            else if (SumaTotal < 0)
            {
              SumaTotal = 0
            }
          }

    }
}
    return;

