//
// Created by Pras Adi on 09/10/22.
//

#include "stdio.h"

/*
 * the while loop has a control condition and
 * executes as long as the condition is true.
 * The loop's condition is tested
 * before executing the code block inside it,
 * so it is called an entry-controlled loop.
 */

int main() {
    /* local variable Initialization */
    int n = 1,times=5;

    /* while loops execution */
    while( n <= times )
    {
        printf("C while loops: %d\n", n);
        n++;
    }
    return 0;
}
