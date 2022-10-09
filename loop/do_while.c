//
// Created by Pras Adi on 09/10/22.
//

#include "stdio.h"

/*
 * Do-while loop is very similar to the while loop,
 * but it always executes the code block at least once
 * and as long as the condition remains true.
 * It is an exit-controlled loop.
 */

int main ()
{
    /* local variable Initialization */
    int n = 1,times=5;

    /* do loops execution */
    do
    {
        printf("C do while loops: %d\n", n);
        n = n + 1;
    } while( n <= times );

    return 0;
}