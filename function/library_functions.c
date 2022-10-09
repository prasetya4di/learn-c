//
// Created by Pras Adi on 09/10/22.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * C library functions are provided by the systems and stored in the library.
 * In C programming, C library functions are also called inbuilt functions.
 *
 * To use Inbuilt Function in C, we must include their respective header files
 * containing prototypes and data definitions.
 */

int main() {
    int i = -10, e = 2, d = 10; //Variables Defining and Assign values
    float rad = 1.43;
    double d1 = 3.0, d2 = 4.0;

    printf("%d\n", abs(i));
    printf("%f\n", sin(rad));
    printf("%f\n", cos(rad));
    printf("%f\n", exp(e));
    printf("%d\n", log(d));
    printf("%f\n", pow(d1, d2));

    return 0;
}
