// MANIPULATING SOURCE
#define _CRT_SECURE_NO_WARNINGS

// define macro BUFFER_SIZE = 80
#define BUFFER_SIZE 80

// Including function prototype
#include "manipulating.h"

void manipulating(void)
{
    // V1
    printf("*** Start of Concatenating strings Demo ***\n");

    // declaring cstring variable with length of BUFFER_SIZE
    char string1[BUFFER_SIZE];

    // declaring cstring variable with length of BUFFER_SIZE
    char string2[BUFFER_SIZE];
    do {
        printf("Type the 1st string (q - to quit): \n");

        // Read string from stdin, stops when BUFFER_SIZE - 1 characters are read or \n is reached and stores to string1
        fgets(string1, BUFFER_SIZE, stdin);

        // Setting the last character in cstring to null delimiter byte
        string1[strlen(string1) - 1] = '\0';

        // if (string1 != "q")
        if (strcmp(string1, "q") != 0) {
            printf("Type the 2nd string:\n");

            // Read string from stdin, stops when BUFFER_SIZE - 1 characters are read or \n is reached and stores to string2
            fgets(string2, BUFFER_SIZE, stdin);

            // Setting the last character in cstring to null delimiter byte
            string2[strlen(string2) - 1] = '\0';

            // appends string2 to string1
            strcat(string1, string2);
            printf("Concatenated string is \'%s\'\n", string1);
        }
        // while (strinq1 != "q")
    } while (strcmp(string1, "q") != 0);
    printf("*** End of Concatenating Strings Demo ***\n\n");
}
