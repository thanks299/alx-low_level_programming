#include <stdio.h>
#include "search_algos.h"

int linear_search(int *array, size_t size, int value) {
    if (!array)
        return -1;

    size_t i = 0;
    for (; i < size; i++) {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return i;
    }

    return -1;
}
