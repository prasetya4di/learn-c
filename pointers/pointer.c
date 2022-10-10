//
// Created by Pras Adi on 10/10/22.
//

#include "stdio.h"

/*
 * A pointer is a variable in C,
 * and the pointer's value is the address of a memory location.
 *
 * Benefit of using pointers
 * - Allow the passing of arrays and strings to function more efficiently.
 * - Make it possible to return more than one value from the function.
 * - Reduce the length and complexity of a program.
 * - Increase the processing speed
 * - Save the memory
 *
 * Syntax :
 * type *variable_name;
 *
 * Ex :
 * int *width;
 * char *letter;
 */

int main () {
    int  n = 20, *pntr;  //actual and pointer variable declaration

    pntr = &n;  //store address of n in pointer variable

    printf("Address of n variable: %x\n", &n  );

    //address stored in pointer variable
    printf("Address stored in pntr variable: %x\n", pntr );

    //access the value using the pointer
    printf("Value of *pntr variable: %d\n", *pntr );

    return 0;
}
