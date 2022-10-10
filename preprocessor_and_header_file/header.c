//
// Created by Pras Adi on 10/10/22.
//

/*
 * Header files are additional files in a C language containing
 * definitions of different functions and their associated variables
 * that need to be imported into a C program
 * with the help of a preprocessor #include statement.
 * All the header files have a '.h' extension
 * that contains C function declarations and macro definitions.
 * The default header file that comes with the C compiler is the stdio.h
 *
 * Including a header file means using the content of the header file in your source program.
 * A straightforward practice while programming in C is that you can keep every macro,
 * global variables, constants, and other function prototypes in the header files.
 *
 * Syntax :
 * #include <file>
 * This will search for your file name in the standard list of system directories
 * or within the compiler's directory of header files.
 *
 * or
 *
 * #include "file"
 * This used for user-defined or external files.
 * This technique used to search for the files within the directory
 * that contains the current file.
 */

/*
 * How include works
 * #include preprocessor directive statement tries to go through the C preprocessors
 * to scan for a specific file, such as input,
 * before following the rest of your existing source file.
 */

#include<stdio.h>
#include"swap.h"

int main() {
    int a=20;
    int b=30;
    swap (&a,&b);
    printf ("a=%d\n", a);
    printf ("b=%d\n",b);
    return 0;
}
