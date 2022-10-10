//
// Created by Pras Adi on 10/10/22.
//

/*
 * The preprocessor is a program invoked by the compiler
 * that modifies the source code before the actual composition takes place.
 *
 * To use any preprocessor directives, first, prefix them with the # (hash) symbol.
 *
 * List all preprocessor directives :
 *
 * Macro substitution division
 * #include (File includes)
 * #define (Macro define)
 * #undif (Macro undefine)
 * #ifdef (If Macro defined)
 * #ifndef (If Macro not defined)
 *
 * File inclusion division
 * #if
 * #elif
 * #else
 * #endif
 *
 * Compiler control division
 * #line (Set line number)
 * #error (Abort compilation)
 * #pragma (Set compiler option)
 */

/*
 * #include <stdio.h> tell the compiler to add stdio.h file from System Libraries to the current source file, and
 * #include "stdlib.h" tells the compiler to get header.h from the local directory.
 */
#include <stdio.h>
#include "stdlib.h"

/* #define macro_name character_sequence */
/*
 * Will run loop ten times
 */
#define LIMIT 10

//It tells the compiler to undefine the existing LIMIT and set it as 20.
#undef  LIMIT
#define  LIMIT 20

int main()
{
    int counter;
    for(counter =1; counter <= LIMIT; counter++)
    {
        printf("%d\n",counter);
    }
    return 0;
}