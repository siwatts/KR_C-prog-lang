#include <stdio.h>

float getCelsius(int fahrenheit);
float getFahrenheit(int celsius);

// Print Fahrenheit-Celsius table for fahr = 0, 20, ... 300
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    // Fahrenheit-Celsius:
    lower = 0;
    upper = 300;
    step = 20;
    printf("|=====|=======|\n");
    printf("|  F  |   C   |\n");
    printf("|=====|=======|\n");
    for (fahr = upper; fahr >= lower; fahr -= step)
    {
        celsius = getCelsius(fahr);
        printf("| %3.0f | %5.1f |\n", fahr, celsius);
    }
    printf("|=====|=======|\n");

    // Celsius-Fahrenheit:
    lower = 0;
    upper = 100;
    step = 5;
    printf("\n");
    printf("|=====|=======|\n");
    printf("|  C  |   F   |\n");
    printf("|=====|=======|\n");
    for (celsius = lower; celsius <= upper; celsius += step)
    {
        fahr = getFahrenheit(celsius);
        printf("| %3.0f | %5.1f |\n", celsius, fahr);
    }
    printf("|=====|=======|\n");
}

float getCelsius(int fahrenheit)
{
    return (5.0 / 9.0) * (fahrenheit - 32);
}

float getFahrenheit(int celsius)
{
    return ( (9.0 / 5.0) * celsius ) + 32;
}
