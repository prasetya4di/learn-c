//
// Created by Pras Adi on 10/10/22.
//

#include "stdio.h"
#include "string.h"

/*
 * Structure is a user-defined data type in C,
 * which stores a collection of different data types.
 * - The structure is similar to an array; the only difference is that the array stores the same data types.
 * - struct keyword declares the structure in C.
 * - Variables inside the structure are called members of the structure.
 *
 * Syntax :
 * struct structureName {
 *      //member definitions
 * }
 *
 * Ex :
 * struct Courses {
 *      char website[50];
 *      char subject[50];
 *      int Price;
 * }
 */

struct Courses
{
    char  WebSite[50];
    char  Subject[50];
    int   Price;
};

int main() {
    struct Courses C;

    // Initialization
    strcpy( C.WebSite, "w3schools.in");
    strcpy( C.Subject, "The C Programming Language");
    C.Price = 0;

    // Print
    printf( "WebSite : %s\n", C.WebSite);
    printf( "Book Author : %s\n", C.Subject);
    printf( "Book Price : %d\n", C.Price);

    return 0;
}
