//
// Created by Pras Adi on 10/10/22.
//

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void exFree()
{
    printf("\n Start trying free \n");
    char *mem_alloc;
    //memory allocated dynamically
    mem_alloc = malloc( 20 * sizeof(char) );

    if( mem_alloc == NULL ) {
        printf("Couldn't able to allocate requested memory\n");
    } else {
        strcpy( mem_alloc,"w3schools.in");
    }

    printf("Dynamically allocated memory content  : " \ "%s\n", mem_alloc );
    mem_alloc=realloc(mem_alloc,100*sizeof(char));

    if( mem_alloc == NULL ) {
        printf("Couldn't able to allocate requested memory\n");
    } else {
        strcpy( mem_alloc,"space is extended upto 100 characters");
    }

    printf("Resized memory : %s\n", mem_alloc );
    free(mem_alloc);
}
