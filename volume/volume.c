// Modifies the volume of an audio file

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

// Number of bytes in .wav header
const int HEADER_SIZE = 44;
uint8_t header[];

int main(int argc, char *argv[])
{
    // Check command-line arguments
    if (argc != 4)
    {
        printf("Usage: ./volume input.wav output.wav factor\n");
        return 1;
    }

    // Open files and determine scaling factor
    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    FILE *output = fopen(argv[2], "w");
    if (output == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    float factor = atof(argv[3]);

    while (fread(&header, sizeof(HEADER_SIZE), 1, input) != 0)
    {
        fwrite(&header, sizeof(HEADER_SIZE), 1, output);
    }

    while (fread(&header, sizeof(HEADER_SIZE), 1, input) != 0)
    {
        header *= factor;
        fwrite(&header, sizeof(HEADER_SIZE), 1, output);
    }

    // Close files
    fclose(input);
    fclose(output);
}
