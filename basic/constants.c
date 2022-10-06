//
// Created by Pras Adi on 06/10/22.
//

#include<stdio.h>

/*
 * Constant are like variable, except their value
 * never changes during execution once defined.
 * Example of declare a constant
 * const type constant_name;
 * Putting const either before or after the type is possible
 * const type constant_name is the same with type const constant_name;
 */

const int SIDE = 10;
int const OTHER_SIDE = 15;

int main()
{
    int area;
    area = SIDE*SIDE;
    printf("The area of the square with side: %d is: %d sq. units", SIDE, area);
    return 0;
}
