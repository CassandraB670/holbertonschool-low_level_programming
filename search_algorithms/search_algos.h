#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/* Standard library */

#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>

/* Function prototypes */

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif
