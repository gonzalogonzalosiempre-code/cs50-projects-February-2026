
#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Obtener la entrada de texto del usuario
    string text = get_string("Text: ");

    int letters = 0;
    int words = 1; // Empezamos en 1 porque la última palabra no tiene un espacio después
    int sentences = 0;

    // Recorrer el texto carácter por carácter
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        // Contar letras (alfabéticas)
        if (isalpha(text[i]))
        {
            letters++;
        }
        // Contar palabras (basado en espacios)
        else if (isspace(text[i]))
        {
            words++;
        }
        // Contar oraciones (basado en . ! o ?)
        else if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }

    // Calcular el promedio de letras y oraciones por cada 100 palabras
    float L = (float) letters / (float) words * 100;
    float S = (float) sentences / (float) words * 100;

    // Aplicar la fórmula de Coleman-Liau
    float index = 0.0588 * L - 0.296 * S - 15.8;
    int grade = round(index);

    // Imprimir el resultado según el índice
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }
}
