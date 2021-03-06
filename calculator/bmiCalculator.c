/*
 * Code written by Rohit Sattu
 */

#include <stdio.h>
/* define a function sqr(x) = x*x; */
#define SQR(x) ((x) * (x))

void convert(float *pweight, float *pheight);
int computeBMI(float w, float h, float *pbmi);

void main() {
        float w, h, bmi;
        float  *pbmi, *pw, *ph;
        pbmi = &bmi;
        pw = &w;
        ph = &h;

        /* read user inputs */
        printf("Please enter your weight in kilograms: ");
        scanf("%f", &w);
        printf("Please enter your height in centimeters: ");
        scanf("%f", &h);

        /* convert and calculate bmi */
        convert(pw, ph);
        computeBMI(w, h, pbmi);

        /* print results */
        if (bmi < 18.5) {
                printf("Your BMI value is %.1f and you are underweight.\n", bmi);
        } else if (bmi >= 18.5 && bmi < 25) {
                printf("Your BMI value is %.1f and you are normal.\n", bmi);
        } else if (bmi >= 25 && bmi < 30) {
                printf("Your BMI value is %.1f and you are overweight.\n", bmi);
        } else if (bmi >= 30) {
                printf("Your BMI value is %.1f and you are obese.\n", bmi);
        }
}

void convert(float *pweight, float *pheight) {
        /* convert kg to lbs */
        *pweight = *pweight * 2.2046;
        /* convert cm to feet */
        *pheight = *pheight * 0.3937;
}

int computeBMI(float w, float h, float *pbmi) {
        return *pbmi = ((703 * w)/SQR(h));
}
