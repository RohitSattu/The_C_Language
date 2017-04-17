/*
 * Code written by Rohit Sattu
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* swap function */
void swap(char **s1, char **s2) {
        char *temp;
        temp = *s1;
        *s1 = *s2;
        *s2 = temp;
}

int main() {
        /* array that needs to be alphabetized */
        char *name[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
        int i , j, curr = 0, min = 1;

        /* Selection sort */
        for (i = 0; i < 11; ++i) {
                curr = i;
                for(j = i + 1; j < 12; ++j) {
                        if (strcmp(name[curr], name[j]) > 0) {
                                curr = j;
                        }
                }
                swap(&name[i], &name[curr]);
        }

        for ( i = 0 ; i < 12; i++) {
                printf("%s\n", name[i]);
        }

        return 0;
}
