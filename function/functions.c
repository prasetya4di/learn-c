//
// Created by Pras Adi on 09/10/22.
//

#include "stdio.h"

/*
 * Function is a self-contained block of statements
 * that can be executed whenever required in the program.
 *
 * Benefits of using function
 * - Provides modularity.
 * - Offers reusable code.
 * - In large programs, debugging and editing tasks are effortless with functions.
 * - Program can be modularized into smaller parts.
 * - Separate function can be developed independently according to the need.
 *
 * Syntax :
 * returnType functionName(Parameter list) {
 *      body of the function
 * }
 *
 * Ex :
 * int main() {
 *      return 0;
 * }
 */

/* function declaration */
int addition();

int main()
{
    //local variable definition
    int answer;

    answer = addition(); //calling a function to get addition value.
    printf("The addition of the two numbers is: %d\n",answer);
    return 0;
}

//function returning the addition of two numbers
int addition()
{
    int num1 = 10, num2 = 5; // local variable definition
    return num1+num2;
}