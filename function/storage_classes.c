//
// Created by Pras Adi on 10/10/22.
//

#include "stdio.h"

/*
 * Storage classes are associated with variables for describing
 * the features of any variable or function in the C program.
 * These storage classes deal with features such as scope, lifetime, and visibility
 * that help to define a particular variable during the programs runtime.
 * The data type precedes these storage classes that they had to modify.
 *
 * There are four storage classes types :
 *
 * auto Storage Class
 * auto comes by default with all local variables as its storage class.
 * The keyword auto is used to define this storage class explicitly.
 * Syntax :
 * int roll; (contains auto by default)
 * auto int roll; (in addition, we can use auto keyword).
 *
 * register Storage Class
 * this sotrage class is implemented for classifying local variables
 * whose value needs to be saved in a register in place of RAM.
 * This is implemented when you want
 * your variable the maximum size equivalent to the size of register.
 * Syntax :
 * register int counter;
 *
 * static Storage Class
 * this storage class uses static variables that are used popularly
 * for writing programs in C language.
 * Static variables preserve the value of a variable even then the scope limit exceeds.
 * Static storage class has its scope local to the function which it is defined.
 * On the other hand, global static variables can be accessed in any part of the program.
 * The default value assigned '0' by the C compiler.
 * The static keyword used to define this storage class.
 * Ex :
 * static int var = 6;
 *
 * extern Storage Class
 * The extern storage class is used to feature a variable to be used
 * from within different blocks of the same program.
 * Mainly, a value is set to that variable in different block or function
 * and can be overwritten or altered from within another block.
 * Hence, it can be said that an extern variable is a global variable that is assigned
 * with a value that can be accessed and used within the entire program.
 * Moreover, a global variable can be explicitly made an extern variable
 * by implementing the keyword extern preceded the variable name.
 * Ex :
 * extern void funcExtern();
 */

int val;
extern void funcExtern();

int main() {
    // ex auto storage classes
    auto int roll;

    // ex register storage classes
    for(register int counter=0; counter<=9; counter++) {
        printf("%d\n", counter);
    }

    // ex static storage classes
    static int var = 6;

    val = 10;
    funcExtern();

    return 0;
}

// within the program
void funcExtern() {
    printf("Value is: %d\n", val);
}