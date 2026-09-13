#include <stdio.h>
#include <string.h>
#include <conio.h>
int main(){

    // Task 9:
    float marks;

    printf("enter marks: ");
    scanf(" %f", &marks);

    if(marks >= 50){
        printf("Pass");
    }
    else{
        printf("Fail");
    }


    return 0;
}