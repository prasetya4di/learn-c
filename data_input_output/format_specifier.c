//
// Created by Pras Adi on 06/10/22.
//

#include "stdio.h"

/*
 * Format Specifiers
 * can be defined as the operators associated with
 * the printf() function for the printing the data
 * referred to by any object or any variable.
 * When a value is stored in a particular variable,
 * you cannot print the value stored in the variable
 * straightforwardly without using the format specifiers.
 * You can retrieve the data stored in the variables and print them
 * onto the console screen by implementing
 * these format specifiers in a printf() function.
 *
 * Format specifiers start with a percentage % operator
 * and followed by a unique character for identifying the data type.
 *
 * There are six types of format specifiers :
 * - %d : Integer format specifier
 * - %f : Float format specifier
 * - %c : Character format specifier
 * - %s : String format specifier
 * - %u : Unsigned integer format specifier
 * - %ld : Long int format specifier
 */

int main() {
    int a = 5;
    float b = 2.5;
    char c = 'c';
    char d[] = "destring";
    unsigned int e = 5;
    long int f = 10;

    printf("%d\n", a);
    printf("%f\n", b);
    printf("%c\n", c);
    printf("%s\n", d);
    printf("%u\n", e);
    printf("%ld\n", f);

    return 0;
}
