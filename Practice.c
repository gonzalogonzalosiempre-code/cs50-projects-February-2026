#include <stdio.h>
#include <cs50.h>

float promedio(int Numero,int Puntaje[]);
int main(void)
{
    const int N = 3;
    int score[N];
    for (int i = 0; i < N; ++i)
    {
        score[i] = get_int("Su puntaje es.. ");
    }

    printf("Tu promedio de Puntuacion es.. %f\n", promedio(N, score));
}

float promedio(int Numero,int Puntaje[])
{
    float PuntajeFinal = 0.0;
    for (int e = 0; e < Numero; ++e)
    {
     PuntajeFinal += Puntaje[e];
    }
    return PuntajeFinal / Numero;
}
