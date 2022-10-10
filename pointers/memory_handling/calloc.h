//
// Created by Pras Adi on 10/10/22.
//

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void exCalloc() {
    char *mem_alloc;
    //memory allocated dynamically
    mem_alloc = calloc( 15, sizeof(char) );

    if( mem_alloc == NULL) {
        printf("Couldn't able to allocate requested memory\n");
    } else {
        strcpy(mem_alloc,"w3schools.in");
    }

    printf("Dynamically allocated memory content : %s\n", mem_alloc );
    free(mem_alloc);
}
