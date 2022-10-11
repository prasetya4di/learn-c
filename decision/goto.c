//
// Created by Pras Adi on 09/10/22.
//

#include "stdio.h"

int main() {
    int age;

    g: //label name
    printf("you are Eligible\n");
    s: //label name
    printf("you are not Eligible");
    printf("\nEnter you age:");
    scanf("%d", &age);
    if(age>=18 && age<25) {
        goto g; //goto label g
    } else if (age<35&&age>18) {
        goto s; //goto label s
    }
    else {
        printf("You are too old");
    }

    return 0;
}