//
// Created by Pras Adi on 10/10/22.
//

#include "stdio.h"

/*
 * In C, one-dimensional arrays of characters are called strings,
 * terminated by a null character '\0'.
 *
 * Two ways to declare a string in C :
 * Through an array of characters
 * char name[4] = {'P','R','A','S'};
 * char name[] = "Pras";
 *
 * Through pointers
 * char *name;
 */

int main () {
    char name[6] = {'C', 'l', 'o', 'u', 'd', '\0'};

    printf("Tutorials %s\n", name );

    return 0;
}
