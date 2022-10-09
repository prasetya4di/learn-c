//
// Created by Pras Adi on 09/10/22.
//

#include "stdio.h"

/*
 * When calling a function in C, arguments can be passed in two ways,
 * by calling by value and by calling by reference.
 *
 * Call by Value :
 * - The actual parameter is passed to a function.
 * - New memory area created for the given parameters can be used only within the function.
 * - The actual parameters cannot be modified here.
 *
 * Call by reference :
 * - Instead of copying a variable, a memory address is passed to function as a parameter.
 * - Address operator (&) is used in the parameter of the called function.
 * - Changes in function reflect the change of the original variables.
 */

//function declaration
int addition(int *num1, int *num2);

int main() {
    //local variable definition
    int answer;
    int num1 = 10;
    int num2 = 5;

    //calling a function to get addition value
    answer = addition(&num1,&num2);

    printf("The addition of two numbers is: %d\n",answer);
    return 0;
}

//function returning the addition of two numbers
int addition(int *a,int *b) {
    return *a + *b;
}
