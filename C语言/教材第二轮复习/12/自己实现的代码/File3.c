/*使用fputs和fgets*/

#include <stdio.h>
#include <stdlib.h>

void main(int argc, char const *argv[])
{
    FILE *input, *output;
    char string[81];
    if(argc != 3)
    {
        printf("Too few or more arguments!\n");
        exit(0);
    }

    if((input = fopen(argv[1], "r")) == NULL)
    {
        printf("Open Input File Error!\n");
        exit(0);
    }

    if((output = fopen(argv[2], "w")) == NULL)
    {
        printf("Open Output File Error!\n");
        exit(0);
    }


    while(fgets(string, 81, input) != NULL)
        fputs(string, output);
    
    fclose(input);
    fclose(output);

    return;
}
