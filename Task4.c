#include <stdio.h>
#include <string.h>
#include <conio.h>
int main(){

    // Task 4:
    float length, width;

    printf("Enter length of the rectangle: ");
    scanf(" %f", &length);

    printf("Enter width of the rectangle: ");
    scanf(" %f", &width);

    float area = length*width;
    float perimeter = 2*(length + width);

    printf("Area of the Rectangle: %f", area);
    printf("\nPerimeter of the Rectangle: %f", perimeter);


    return 0;
}