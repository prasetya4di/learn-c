//
// Created by Pras Adi on 09/10/22.
//

#include <stdio.h>

/*
 * Recursion can be defined as the technique of repeating or doing an activity,
 * which calls itself repeatedly,
 * and the process continues until a specific condition reaches.
 * In the programming, when your program lets you call that specific function from inside that function,
 * then this concept of calling the function from itself can be termed recursion.
 *
 * When you implement this recursion concept,
 * you have to be cautious in defining an exit
 * or terminating condition from this recursive function
 * or else it will continue to an infinite loop.
 */

int fact(int f) {
    if (f==0 || f==1) {
        printf("Calculated Factorial");
        return 1;
    }
    return f * fact(f - 1);
}

int fibo(int g) {
    if (g == 0) {
        return 0;
    }

    if (g == 1) {
        return 1;
    }
    return fibo(g - 1) + fibo(g - 2);
}

int main(void) {
    int f = 12;
    printf("The factorial of %d is %d \n", f, fact(f));

    int g;
    printf("Calculated Fibonacci\n");
    for (g = 0; g < 10; g++) {
        printf("%d \t ", fibo(g));
    }
    return 0;
}
