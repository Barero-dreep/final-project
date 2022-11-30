// FUNDAMENTALS MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#define NUM_INPUT_SIZE 10

#include "fundamentals.h"

void fundamentals()
{
    /* Version 3 */
    printf("*** Start of Copying Strings Demo ***\n");
    char destination[BUFFER_SIZE];
    char source[BUFFER_SIZE];
    do {
        destination[0] = '\0';
        printf("Destination string is reset to empty\n");
        printf("Type the source string (q - to quit):\n");
        fgets(source, BUFFER_SIZE, stdin);
        source[strlen(source) - 1] = '\0';
        if (strcmp(source, "q") != 0) {
            strcpy(destination, source);
            printf("New destination string is \'%s\'\n", destination);
        }
    } while (strcmp(source, "q") != 0);
    printf("*** End of Copying Strings Demo ***\n\n");
}
