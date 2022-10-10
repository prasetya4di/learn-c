//
// Created by Pras Adi on 10/10/22.
//

#include<stdio.h>
#include<string.h>

/*
 * typedef is a C keyword implemented to tell the compiler
 * to assign alternative names to C's pre-existing data types.
 * typedef is typically used with user-defined data types if the names
 * of the datatypes become a bit convoluted or complicated for the programmer
 * to obtain or use within the program.
 *
 * Syntax :
 * typedef <existing_names_of_datatype> <alias_userGiven_name>;
 *
 * Example :
 * regular
 * typedef signed long slong;
 * slong g, d;
 *
 * with struct
 * typedef struct {
 *      type first_member;
 *      type sec_member;
 *      type third_member;
 * } nameOfType;
 *
 * with pointers
 * typedef int* pntr;
 * pntr g, h, i;
 */

typedef struct professor {
    char p_name[50];
    int p_sal;
} prof;

int main() {
    prof pf;
    strcpy(pf.p_name, "Pras");
    pf.p_sal = 50000;
    printf("\n Professor details: \n");
    printf("\n Professor name: %s\t", pf.p_name);
    printf("\n professor salary: %d\t", pf.p_sal);

    return 0;
}