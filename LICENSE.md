                 scanf("%f", (val + i));
                }
        }
        printf("Sorted list in ascending order:\n");
        bubbleSort(p, n);
        printf("%.1f", val[0]);
        for (i = 1; i < n; ++i) {
                printf(" %.1f", val[i]);
        }
        printf("\n");
}

void bubbleSort(float *array, int size) {
        int i, j;
        for (i = 0; i < (size - 1); ++i) {
                for (j = 0; j < (size - i - 1); ++j) {
                        if (*(array + j)  > *(array + j + 1)) {
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
