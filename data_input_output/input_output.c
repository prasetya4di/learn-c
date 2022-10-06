//
// Created by Pras Adi on 06/10/22.
//

#include "stdio.h"

int main() {

    /*
     * To read data you can use
     * the predefined functions scanf()
     * In the example below, scanf()
     * takes input from the user
     * And print it
     */
    int a, b, c;
    printf("Please enter any two numbers: \n");
    scanf("%d %d", &a, &b);
    c = a + b;
    printf("The addition of two number is: %d", c);

    /*
     * The easiest and simples of all I/O operations
     * are taking acharacter as input by reading that
     * character from standart input(keyboard).
     * getchar() function can be used to read a single character.
     * This function is an alternative to scanf() function.
     */
    char title;
    title = getchar();
    printf("\n title: ");
    printf(title);
    printf("\n");

    /*
     * Similiar to getchar(), there is
     * another function that is used to
     * write characters, but one at a time
     */
    char result = 'P';
    putchar(result);
    putchar('\n');

    /*
     * Formatted Input
     * It refers to input data that has been arranged
     * in a specific format. This is possible in C
     * using scanf() function.
     */
    int var1= 60;
    int var2= 1234;
    scanf("%2d %5d", &var1, &var2);

    return 0;
}