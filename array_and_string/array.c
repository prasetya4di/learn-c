//
// Created by Pras Adi on 10/10/22.
//

#include "stdio.h"

/*
 * Array is a data structure in C,
 * which can store a fixed-size sequential collection of elements of the same data type.
 * For example, if we need to store ten numbers.
 * It is easier to define an array of 10 lengths instead of ten variables.
 * An array can be One-Dimensional, Two-Dimensional, and Multidimensional.
 *
 * Syntax to define an array :
 * type arrayName[size];
 */

int main() {
    int myArray[5];
    int n = 0;

    // Initializing elements of the array separately.
    for(n=0; n<sizeof(myArray)/sizeof(myArray[0]); n++) {
        myArray[n] = n;
        printf("%d\n", myArray[n]);
    }
    return 0;
}