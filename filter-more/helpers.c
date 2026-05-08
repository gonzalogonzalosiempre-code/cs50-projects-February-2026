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
            int Gx = 0;
            int Gy = 0;
            for (int fila = i - 1; fila <= i + 1; ++fila)
            {
                switch(fila)
                {
                    case 1:
                    fila = i - 1
                    Gx += -1 * image[fila][j];
                    break;
                    case 2:
                    fila = i
                    Gx += -2 * image[fila][j];
                    case 3:
                    fila = i + i
                    Gx += -1 * image[fila][j];
                }
            }
                for (int col = j - 1; col < j + 1; ++col)
                {
                  switch(col , fila)
                {
                   case 1:
                    col = j + 1 && fila = i - 1
                    Gx += 1 * image[fila][col];
                    break;
                    case 2:
                    col = j + 1 && fila = i
                    Gx += 2 * image[fila][col];
                    case 3:
                    col = j + 1 && fila = i + 1
                    Gx += 1 * image[fila][col];
                }
                }

            }
        }
    }

    return;
}
