#include <stdio.h>
#include <string.h>
#include <conio.h>
int main(){

    // Task 6:
    float Temp_celcius;

    printf("Enter Temperature in Celcius ");
    scanf(" %f", &Temp_celcius);

    printf(" %f", Temp_celcius);

    float Temp_fahrenheit = (Temp_celcius*9/5) + 32;

    printf("Temperature in Fahrenheit: %f", Temp_fahrenheit);

    return 0;
}