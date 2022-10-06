//
// Created by Pras Adi on 06/10/22.
//

#include <stdio.h>
#include <limits.h>

int main() {
    /*
     * Data-type in programming language is the collection
     * of data with values having fixed meanings and characteristics.
     *
     * Data types are used to :
     * - Identify the type of a variable when it is declared.
     * - Identify the type of return value of a function.
     * - Identify the type of parameter expected by a function.
     *
     * Primary(Built-in) data types : void, int, char, float, double
     *
     * Derrived Data Types :
     * - Arrays : sequences of data items having homogeneous values
     * - References : function pointers allow referencing functions with a particular signature.
     * - Pointers : Used to access the memory and deal with their addresses.
     *
     * User Defined Data Types
     * - Structure : It is a package of variables of different types under the same name.
     * This is done to handle the data efficiently. Here the "struct" keyword is used to define a structure.
     * - Union : These allow storing various data types in the same memory location.
     * Programmers can define a union with different members. but only a single
     * member can contain a value at a given time.
     * - Enum : Enumeration is a special data type that consists of integral constants.
     * Each of them is assigned a specific name. "enum" keyword is used to define the enumerated type
     */
    int a = 4000; // positive integer data type
    float b = 5.2324; // float data type
    char c = 'Z'; // char data type
    long d = 41657; // long positive integer data type
    long e = -21556; // long -ve integer data type
    int f = -185; // -ve integer data type
    short g = 130; // short +ve integer data type
    short h = -130; // short -ve integer data type
    double i = 4.1234567890; // double float data type
    float j = -3.55; // float data type

    printf("Storage size for int is: %d \n", sizeof(int));
    printf("Storage size for char is: %d \n", sizeof(char));
    return 0;
}