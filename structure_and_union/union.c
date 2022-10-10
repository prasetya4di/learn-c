//
// Created by Pras Adi on 10/10/22.
//

#include<stdio.h>
#include<string.h>

/*
 * Union is a user-defined data type in C,
 * which stores a collection of different kinds of data,
 * just like a structure.
 * However, with unions, you can only store information in one field at once.
 *
 * Pros :
 * - Unions is like struct, except it uses less memory.
 *
 * Behave :
 * - The keyword union is used to declare the union in C.
 * - Variables inside the union are called members of the union.
 *
 * Syntax :
 * union unionName {
 *   //member definitions
 * }
 *
 * Example :
 * union Courses {
 *   char website[50];
 *   char subject[50];
 *   int price;
 * }
 */

union Courses {
    char  WebSite[50];
    char  Subject[50];
    int   Price;
};

int main() {
    union Courses C;

    strcpy( C.WebSite, "w3schools.in");
    printf( "WebSite : %s\n", C.WebSite);

    strcpy( C.Subject, "The C Programming Language");
    printf( "Book Author : %s\n", C.Subject);

    C.Price = 0;
    printf( "Book Price : %d\n", C.Price);

    return 0;
}