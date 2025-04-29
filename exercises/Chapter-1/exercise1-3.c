#include <stdio.h>

#define UPPER 300 /* upper limit */
#define LOWER 0   /* lower limit of temperatuire scale */
#define STEP 20   /* step size */

/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300; floating-point version */
int main()
{
    printf("Fahrenheit-Celsius table\n");
    float fahr, celsius;

    fahr = LOWER;

    while (fahr <= UPPER)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + STEP;
    }
}