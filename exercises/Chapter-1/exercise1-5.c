#include <stdio.h>

#define UPPER 300 /* upper limit */
#define LOWER 0   /* lower limit of temperatuire scale */
#define STEP 20   /* step size */

int main()
{
    printf("Fahrenheit-Celsius table\n");
    float fahr, celsius;

    fahr = UPPER;

    while (fahr >= LOWER) /* reverse loop */
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr - STEP;
    }
    return 0;
}