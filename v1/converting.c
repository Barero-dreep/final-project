// CONVERTING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS

// define macro BUFFER_SIZE = 80
#define BUFFER_SIZE 80

// Including function prototype
#include "converting.h"

void converting(void)
{
    // V1
    printf("*** Start of Converting Strings to int Demo ***\n");

    // declaring cstring variable with length of BUFFER_SIZE
    char intString[BUFFER_SIZE];

    // declaring int variable
    int intNumber;

    do {
        printf("Type an int numeric string (q - to quit):\n");

        // Read string from stdin, stops when BUFFER_SIZE - 1 characters are read or \n is reached
        // and stores to intString
        fgets(intString, BUFFER_SIZE, stdin);

        // Setting the last character in cstring to null delimiter byte
        intString[strlen(intString) - 1] = '\0';

        // if intString != "q"
        if (strcmp(intString, "q") != 0) {
            // string to int convertation
            intNumber = atoi(intString);
            printf("Converted number is %d\n", intNumber);
        }
        // while (intString != "q")
    } while (strcmp(intString, "q") != 0);
    printf("*** End of Converting Strings to int Demo ***\n\n");
}
