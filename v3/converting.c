// CONVERTING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80

#include "converting.h"

void converting(void)
{
    /* Version 3 */
    printf("*** Start of Converting Strings to long Demo ***\n");
    char longString[BUFFER_SIZE];
    long longNumber;

    do {
        printf("Type an int numeric string (q - to quit ):\n");
        fgets(longString, BUFFER_SIZE, stdin);
        longString[strlen(longString) - 1] = '\0';

        if (strcmp(longString, "q") != 0) {
            longNumber = atoi(longString);
            printf("Converted number is %ld\n", longNumber);
        }
    } while (strcmp(longString, "q") != 0);
    printf("*** End of Converting Strings to long Demo ***\n\n");
}
