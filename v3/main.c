#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// Including function prototypes
#include "converting.h"
#include "fundamentals.h"
#include "manipulating.h"
#include "tokenizing.h"

int main(void)
{
    // declaring cstring variable with length of 10
    char buff[10];
    do {
        printf("1 - Fundamentals\n");
        printf("2 - Manipulation\n");
        printf("3 - Converting\n");
        printf("4 - Tokenizing\n");
        printf("0 - Exit\n");
        printf("Which module to run? \n");

        // Read string from stdin, stops when 9 characters are read or \n is reached
        // and stores to buffer1
        fgets(buff, 10, stdin);

        // buff first character == '1' -> call fundamentals function
        // buff first character == '2' -> call manipulating function
        // buff first character == '3' -> call converting function
        // buff first character == '4' -> call tokenizing function
        switch (buff[0]) {
            case '1':
                fundamentals();
                break;
            case '2':
                manipulating();
                break;
            case '3':
                converting();
                break;
            case '4':
                tokenizing();
                break;
        }
        // while (first character of buff != '0')
    } while (buff[0] != '0');

    return 0;
}
