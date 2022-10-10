//
// Created by Pras Adi on 10/10/22.
//

#include "malloc.h"
#include "calloc.h"
#include "free.h"

/*
 * In the dynaic memory allocation technique,
 * memory allocation occurs while running a program.
 * It has the facility to increase/decrease the allocated memory quantity
 * and can release or free up the memory whenever not needed or used.
 * Memory can also be reallocated if needed.
 * It is more beneficial, and it can manage memory efficiently.
 *
 * The functions used to manipulate memory are malloc(), calloc(), and realloc().
 * These commonly used functions are available through the stdlib() library.
 *
 * malloc function
 * - Allocates space in memory during the program's execution.
 * - Does not initialize the space in memory allocated during execution. It carries garbage value.
 * - Returns a null pointer if it couldn't allocate the requested amount of memory.
 * Syntax :
 * malloc (number *sizeof(int));
 *
 * calloc function
 * The calloc() and malloc() function is similar.
 * But calloc() allocates memory for zero-initializes. However, malloc() does not
 * Syntax :
 * calloc (number, sizeof(int));
 *
 * realloc function
 * - realloc() functions modifies the allocated memory size to a new size by the malloc() and calloc() functions.
 * - If enough space doesn't exist in the current block's memory to expand,
 * a new block is allocated for the total size of the reallocation,
 * then copies the existing data to the new block and frees the old block.
 * Syntax :
 * realloc (pointer_name, number * sizeof(int));
 *
 * free function
 * The free() function releases the memory allocated by the malloc(), calloc(), realloc() functions.
 * Syntax:
 * free (pointer_name);
 */

int main() {
    exMalloc();
    exCalloc();
    exFree();
    return 0;
}
