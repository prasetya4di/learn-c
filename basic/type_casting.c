//
// Created by Pras Adi on 06/10/22.
//

#include <stdio.h>

int main() {

    /*
     * Type casting in C is used to convert a variable
     * from one data type to another, and after type casting
     * compiler treats the variable as the new data type.
     *
     * Example :
     *
     */

    int a;
    a = 15/6;
    printf("Before type casting : %d\n",a);

    float b;
    b = (float) 15/6;
    printf("After type casting : %f\n",b);

    return 0;
}
