#include <stdio.h>
#include <string.h>
#include <conio.h>
int main(){

    // Task 5:
    int n;

    printf("Enter a number: ");
    scanf(" %d", &n);

    int square = n*n;
    int cube = n*n*n;

    printf("Square of the number is: %d", square);
    printf("\nCube of the number is: %d", cube);

    return 0;
}