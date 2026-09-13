#include <stdio.h>
#include <string.h>
#include <conio.h>
int main(){

    // Task 8:
    float num1,num2,num3;

    printf("Enter three numbers: ");
    scanf(" %f %f %f", &num1, &num2, &num3);

    float average = (num1 + num2 + num3)/3;

    printf("average is: %f", average);


    return 0;
}