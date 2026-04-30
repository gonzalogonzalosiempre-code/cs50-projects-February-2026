#include <stdio.h>
#include <string.h>

struct Persona
{
    int edad;
    char nombre[15];
};
int main(void)
{
    char Nombre[15];
    int Edad;
    printf("Introduce Tu Nombre..\n");
    scanf("%c", &Nombre);
    printf("Introduce Tu Edad..\n");
    scanf("%i", &Edad);
    struct Persona Persona1;
    {
        Persona1.edad = Edad;
        strcpy(Persona1.nombre, Nombre);
    }

    for (int i = 0; i < strlen(Nombre); ++i)
    {
        printf("%c\n", Nombre[i]);
    }
}
