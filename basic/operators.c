//
// Created by Pras Adi on 06/10/22.
//

#include <stdio.h>

void newLine() {
    printf("\n");
}

int main() {

    /*
     * Arithmetic operators
     * Arithmetic operators are used for performing
     * mathematical calculations like addition (+),
     * subtraction(-), multiplication (*), division(/),
     * and modulus (%)
     * Example :
     */
    int i=3,j=7,k; /* Variables Defining and Assign values */
    k=i+j;
    printf("sum of two numbers is %d\n", k);

    /*
     * Increment and Decrement Operators
     * Are useful operators generally used to minimize the calculation
     * ex : ++x and x++ means x=x+1 or --x and x-- means x=x-1
     * But there is a slight difference between ++ or -- written
     * before or after the operand.
     * Applying the pre-increment first adds one to the operand,
     * and then the result is assigned to the variable on the left,
     * whereas post-increment first assigns the value to the variable on the left
     * and then increments the operand.
     */
    //set a and b both equal to 5.
    int a=5, b=5;

    //Print them and decrementing each time.
    //Use postfix mode for a and prefix mode for b.
    printf("\n%d %d",a--,--b);
    printf("\n%d %d",a--,--b);
    printf("\n%d %d",a--,--b);
    printf("\n%d %d",a--,--b);
    printf("\n%d %d",a--,--b);
    newLine();

    /*
     * Relational Operator
     * are used to compare two quantities or values
     * == (is equal to)
     * != (it is not equal to)
     * > (Greater than)
     * < (Less than)
     * >= (Greater than or equal to)
     * <= (Less than or equal to)
     */
    if ("test" == "test") {
        printf("\nBenar");
    }
    newLine();

    /*
     * Logical Operators
     * Used when we test more than one condition to make decisions.
     * There are :
     * && (meaning logical AND)
     * || (meaning logical OR)
     * ! (meaning logical NOT
     */
    if ("test" == "test" && "test" == "tes") {
        printf("\nBenar");
    } else {
        printf("\nSalah");
    }
    newLine();

    /*
     * Bitwise Operators
     * C provides a special operator for bit operation between two variables.
     * << (Binary Left Shift Operator)
     * >> (Binary Right Shift Operator)
     * ~ (Binary Ones Complement Operator)
     * & (Binary AND Operator)
     * ^ (Binary XOR Operator)
     * | (Binary OR Operator)
     * EX :
     */
    // a = 5(00000101), b = 9(00001001)
    unsigned char c = 5, d = 9;

    // The result is 00000001
    printf("c = %d, d = %d\n", c, d);
    printf("c&d = %d\n", c & d);
    // The result is 00001101 or 13
    printf("c|d = %d\n", c | d);
    // The result is 00001100
    printf("c^d = %d\n", c ^ d);
    // The result is 11111010
    printf("~c = %d\n", c = ~c);
    // The result is 00010010
    printf("d<<1 = %d\n", d << 1);
    // The result is 00000100
    printf("d>>1 = %d\n", d >> 1);
    newLine();

    /*
     * Assignment operators
     * are applied to assign the result of an expression to a variable.
     * = (assign)
     * += (increments then assign)
     * -+ (decrements then assign)
     * *= (Multiplies then assign)
     * /= (Divides then assign)
     * %= (Modulus then assign)
     * <<= (Left shift and assign)
     * >>= (Right shift and assign)
     * &= (Bitwise AND assign)
     * ^= (Bitwise exclusive OR and assign)
     * |= (Bitwise inclusive OR and assign)
     */
    int e=3,f=7,g; /* Variables Defining and Assign values */
    e+=2;
    f-=3;
    g=e+f;
    printf("sum of e and k is %d\n", k);
    newLine();

    /*
     * Conditional Operator
     * C offers a ternary operator, which is
     * the conditional operator (?: in combination)
     * Ex :
     * condition ? do when true : do when false
     */
    "test" == "tes" ? printf("Benar") : printf("Salah");
    newLine();

    /*
     * Special Operator
     * sizeof() (returns the size of a memory location)
     * & (returns the address of a memory location)
     * * (pointer to a variable)
     */
    int h=10; // Variables Defining and Assign values
    printf("integer: %lu\n", sizeof(h));

    return 0;
}