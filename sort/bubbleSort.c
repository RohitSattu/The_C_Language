/*
 * Code written by Rohit Sattu
 */
 
#include <stdio.h>

void bubbleSort(float *array, int size);
void swap(float *x, float *y);

void main() {
        int i, n;
        
        /* set max number of values to be sorted */
        float val[100], *p;
        p = val;
        
        /* get number of values to be sorted */
        printf("Please enter the number of values to be sorted: ");
        scanf("%d", &n);
        
        /* get values from user and add it to array */
        printf("Please enter %d values: ", n);
        if (n > 0) {
                for (i = 0; i < n; ++i) {
                        scanf("%f", (val + i));
                }
        }
        
        /* sort using bubbleSort method */
        printf("Sorted list in ascending order:\n");
        bubbleSort(p, n);
        
        
        /* Print sorted values */
        for (i = 0; i < n; ++i) {
                printf(" %.1f", val[i]);
        }
        printf("\n");
}

void bubbleSort(float *array, int size) {
        int i, j;
        /* loop through the entire array */
        for (i = 0; i < (size - 1); ++i) {
                /* Go through the unsorted array */
                for (j = 0; j < (size - i - 1); ++j) {
                        /* compare adjacent elements */
                        if (*(array + j)  > *(array + j + 1)) {
                                /* swap if not in ascending order */
                                swap((array + j), (array + j + 1));
                        }
                }
        }
}

void swap(float *x, float *y) {
        float temp;
        temp = *x;
        *x = *y;
        *y = temp;
}
