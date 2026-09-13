#include <stdio.h>

int main(){

    // Task 1
    float marks;
    int family_income;

    printf("Enter your marks: (percentage): ");
    scanf(" %f", &marks);
    printf("Enter your family income: ");
    scanf(" %d", &family_income);

    if(marks >= 80 || family_income < 50000){
        printf("You qualified for Scholarship.");
    }
    else{
        printf("You did not qualify for scholarship");
    }

    return 0;
}