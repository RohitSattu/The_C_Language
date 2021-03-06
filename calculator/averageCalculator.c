/*
 * Code written by Rohit Sattu
 */
 
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
        int i;
        double ave = 0;
        /* check number of arguments */
        if (argc >= 2) {
                for (i = 1; i < argc; ++i) {
                        /* convert string to double */
                        ave += atof(argv[i]);
                }
                printf("The average is %.1f\n", (ave/(argc - 1)));
        } else {
                printf("Need at-least 2 arguments.\nUsage: a.out arg1 arg2 arg3 ....\n");
        }
}
