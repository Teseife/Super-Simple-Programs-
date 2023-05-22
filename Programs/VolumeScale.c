#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// Number of bytes in .wav header
const int HEADER_SIZE = 44;

/**
 * Author: Thomas Seife
 * Date: 5/22/2023
 * Description: This program modifies the volume of a WAV audio file.
 *
 * @param argc Argument count (the number of arguments in the command line).
 * @param argv Argument vector (input from the user, including the program name at argv[0]).
 * @return 1 if argc is not 4 or if the file fails to open; otherwise, 0.
 */
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
        printf("Could not open input file.\n");
        return 1;
    }

    FILE *output = fopen(argv[2], "w");
    if (output == NULL)
    {
        printf("Could not open output file.\n");
        return 1;
    }

    float factor = atof(argv[3]);

    // Copy header from input file to output file
    uint8_t header[HEADER_SIZE];

    // Read from input
    fread(header, HEADER_SIZE, 1, input);

    // Write to output
    fwrite(header, HEADER_SIZE, 1, output);

    // Read samples from input file, modify the volume, and write updated data to output file
    int16_t sample;
    while (fread(&sample, sizeof(int16_t), 1, input))
    {
        sample *= factor;
        fwrite(&sample, sizeof(int16_t), 1, output);
    }

    // Close files
    fclose(input);
    fclose(output);

    return 0;
}
