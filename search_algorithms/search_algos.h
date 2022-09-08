#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

/* library */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* prototype */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int middle(int *array, int low, int high, size_t size, int value);

#endif /* _SEARCH_ALGOS_H_ */