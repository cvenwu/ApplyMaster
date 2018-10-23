#include <stdio.h>
#include <stdlib.h>


void main(int argc, char const *argv[])
{
    FILE *input, *output;
    if(argc != 3)
    {
        printf("Arguments too more or too less!\n");
        exit(0);
    }

    if((input = fopen(argv[1], "r")) == NULL)
    {
        printf("Input File Open Error!\n");
        exit(0);
    }

    if((output = fopen(argv[2], "w+")) == NULL)
    {
        printf("Output File Open Error!\n");
        exit(0);
    }

    while(!feof(input))
    {
        fputc(fgetc(input), output);
    }


    fclose(input);
    fclose(output);

    return;
}
