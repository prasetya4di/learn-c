//
// Created by Pras Adi on 09/10/22.
//

#include "stdio.h"

/*
 * A scope is a region of the program,
 * and the scope of variables refers to the area of the program
 * where the variables can be accessed after its declaration.
 *
 * In C, every variable is defined in scope.
 * You can define scope as the section or region of a program
 * where variable has its existence;
 * moreover, that variable cannot be used or accessed beyond that region.
 * In C, a variable declared within a function differs from a variable declared outside a function.
 *
 * The variable can be declared in three places. These are :
 * - Local variables : Inside a function or a block.
 * - Global variables : Out of all funtions.
 * - Formal parameters : In the function parameters.
 */

//global variable definition
int z;

int main ()
{
    //local variable definition and initialization
    int x,y;

    //actual initialization
    x = 20;
    y = 30;
    z = x + y;

    printf ("value of x = %d, y = %d and z = %d\n", x, y, z);

    return 0;
}