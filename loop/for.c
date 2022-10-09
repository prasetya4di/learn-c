//
// Created by Pras Adi on 09/10/22.
//

#include "stdio.h"

/*
 * For loop is very similar to the while loop
 * in that it continues to process the block of code
 * until a statement returns false,
 * and all the conditions are defined in one line.
 * It is an entry-controlled loop.
 */

int main() {
    /* local variable Initialization */
    int n,times=5;

    /* for loops execution */
    for( n = 1; n <= times; n = n + 1 ) {
        printf("C for loops: %d\n", n);
    }

    return 0;
}